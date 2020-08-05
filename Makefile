default: rtltest

rtltest:
	make -C tests/rtl run

clean:
	make -C tests/rtl clean