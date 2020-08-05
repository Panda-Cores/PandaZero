#include <verilated_vcd_c.h>

vluint64_t main_time = 0;       // Current simulation time
// This is a 64-bit integer to reduce wrap over issues and
// allow modulus.  This is in units of the timeprecision
// used in Verilog (or from --timescale-override)

double sc_time_stamp () {       // Called by $time in Verilog
	return main_time;           // converts to double, to match
								// what SystemC does
}

template<class MODULE>	class TESTBENCH {
	public:
		unsigned long	m_tickcount;
		MODULE	*m_core;
		VerilatedVcdC	*m_trace;

		TESTBENCH(void) {
			m_core = new MODULE;
			Verilated::traceEverOn(true);
			m_tickcount = 0l;
		}

		// Open/create a trace file
		virtual	void	opentrace(const char *vcdname) {
			if (!m_trace) {
				m_trace = new VerilatedVcdC;
				m_core->trace(m_trace, 99);
				m_trace->open(vcdname);
			}
		}

		// Close a trace file
		virtual void	close(void) {
			if (m_trace) {
				m_trace->close();
				m_trace = NULL;
			}
		}


		virtual ~TESTBENCH(void) {
			this->close();
			delete m_core;
			m_core = NULL;
		}

		virtual void	reset(void) {
			m_core->rstn_i = 0;
			for(int i = 0; i < 4; i++)
				this->tick();
			m_core->rstn_i = 1;
		}

		virtual void	tick(void) {
			// Increment our own internal time reference
			m_tickcount++;

			// Make sure any combinatorial logic depending upon
			// inputs that may have changed before we called tick()
			// has settled before the rising edge of the clock.
			m_core->clk = 0;
			m_core->eval();

			if(m_trace) m_trace->dump(10*m_tickcount-2);

			// Toggle the clock
			// Rising edge
			m_core->clk = 1;
			m_core->eval();
			if(m_trace) m_trace->dump(10*m_tickcount);

			// Falling edge
			m_core->clk = 0;
			m_core->eval();

			if (m_trace) {
				// This portion, though, is a touch different.
				// After dumping our values as they exist on the
				// negative clock edge ...
				m_trace->dump(10*m_tickcount+5);
				//
				// We'll also need to make sure we flush any I/O to
				// the trace file, so that we can use the assert()
				// function between now and the next tick if we want to.
				m_trace->flush();
			}
		}

		virtual bool	done(void) { return (Verilated::gotFinish()); }

		// -----------------------------------------------------------
		// Debug interfacing functions
		// -----------------------------------------------------------

		// Read from memory address (can also be a memory mapped
		// slave of the wishbone bus)
		int read_mem(int addr){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_addr_i = addr;
			this->m_core->dbg_cmd_i = 0x01;
			this->tick();
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x0;
			return (int) this->m_core->dbg_data_o;
		}

		// Write to memory address (can also be a memory mapped
		// slave of the wishbone bus)
		void write_mem(int addr, int data){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_addr_i = addr;
			this->m_core->dbg_data_i = data;
			this->m_core->dbg_cmd_i = 0x02;
			this->tick();
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x0;
			this->tick();
		}

		// Read from core registers
		int read_reg(int reg){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_addr_i = reg;
			this->m_core->dbg_cmd_i = 0x13;
			this->tick();
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x0;
			return (int) this->m_core->dbg_data_o;
		}

		// Write to core registers	
		void write_reg(int reg, int data){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_addr_i = reg;
			this->m_core->dbg_cmd_i = 0x14;
			this->m_core->dbg_data_i = data;
			this->tick();
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x0;
			this->tick();
		}

		// Halt the core
		void halt_core(){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x11;
			this->tick();
			this->m_core->dbg_cmd_i = 0x0;
		}

		// Resume the core
		void resume_core(){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x12;
			this->tick();
			this->m_core->dbg_cmd_i = 0x0;
		}

		// Reset the core
		void reset_core(){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x03;
			this->tick();
			this->m_core->dbg_cmd_i = 0x0;
		}

		// Read the program counter
		int read_pc(){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x15;
			this->tick();
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x0;
			return (int) this->m_core->dbg_data_o;
		}

		// Set the program counter
		void set_pc(int pc){
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x16;
			this->m_core->dbg_data_i = pc;
			this->tick();
			while(this->m_core->dbg_ready_o == 0)
				this->tick();
			this->m_core->dbg_cmd_i = 0x0;
			this->tick();
		}


		void load_program(int program[4096], int len, int startAddr){
			this->halt_core();
			for(int i = 0; i < len; i++){
				this->write_mem(startAddr + 4*i, program[i]);
			}
		}

		void load_program(char* filename, int startAddr){
			int program[4096];
			int instr_cnt = 0;
			size_t len = 0;
			ssize_t read;
			char * line = NULL;
    		FILE *fp;

			// Read in the program
			fp = fopen(filename, "r");
			if(fp){
				while((read = getline(&line, &len, fp)) != -1){
					program[instr_cnt] = (int)strtol(line, NULL, 16);;
					instr_cnt +=1;
				}
			} else {
				std::cout << "Error reading dump" << std::endl;
				exit(-10);
			}

			// Rest the core
			this->reset();
			// Halt the core
			this->halt_core();
			
			// Load the program into memory
    		this->load_program(program, instr_cnt, startAddr);

			// Set core to start of program
    		this->set_pc(0x0);

			// Start the program
			this->resume_core();
		}

		// Check a bunch of memory addresses for the expected results
		int check_memory(int *exp_mem, int n_checks){
			for(int i = 0; i < n_checks; i++){
				if(this->read_mem(exp_mem[i*2]) != exp_mem[i*2+1])
					return i+1;
			}
			return 0;
		}
};