template<class MODULE>	class TESTBENCH {
	public:
		unsigned long	m_tickcount;
		MODULE	*m_core;

		TESTBENCH(void) {
			m_core = new MODULE;
			m_tickcount = 0l;
		}

		virtual ~TESTBENCH(void) {
			delete m_core;
			m_core = NULL;
		}

		virtual void	reset(void) {
			m_core->rstn_i = 1;
			for(int i = 0; i < 4; i++)
				this->tick();
			m_core->rstn_i = 0;
		}

		virtual void	tick(void) {
			// Increment our own internal time reference
			m_tickcount++;

			// Make sure any combinatorial logic depending upon
			// inputs that may have changed before we called tick()
			// has settled before the rising edge of the clock.
			m_core->clk = 0;
			m_core->eval();

			// Toggle the clock

			// Rising edge
			m_core->clk = 1;
			m_core->eval();

			// Falling edge
			m_core->clk = 0;
			m_core->eval();
		}

		virtual bool	done(void) { return (Verilated::gotFinish()); }
};