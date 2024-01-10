%.out: %.o driver.o
	gcc -o $@ $< driver.o

%.o: %.c
	gcc -c $<

.PHONY: clean

clean:
	rm -f *.o *.out