TESTS = $(shell ./common/list_tests.py)

run:
	@for test in $(TESTS) ; do \
		make -C tests/$$test ; \
	done

	@echo "\n\nRESULTS:"

	@for test in $(TESTS) ; do \
		echo  -n "tests/$$test: \t"; \
		cat tests/$$test/result.txt ; \
	done

verilate:
	make -f vrltr.mk

clean:
	@for test in $(TESTS) ; do \
		make -C tests/$$test clean ; \
	done
	make -f vrltr.mk clean
