all: build test clean

build:
	gcc 7-4.c

test:
	./a.out < testfile
	cat testfile

clean:
	rm -rf ./a.out
