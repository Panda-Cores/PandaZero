#include <verilated_vcd_c.h>

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
};