all: driver.o wrapper.o
	gcc driver.o wrapper.o -o test.out
driver.o: driver.c
	gcc -c driver.c
wrapper.o: wrapper.c
	gcc -c wrapper.c
clean:
	rm -f *.o *.out
