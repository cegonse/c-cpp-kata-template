all:
	rm -rf build
	mkdir -p build
	cd build && cmake .. && make && ./test_example
	cd ..

.PHONY: all
