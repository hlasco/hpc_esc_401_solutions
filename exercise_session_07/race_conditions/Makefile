CC=cc
CFLAGS= -g -Wall -O3 -fopenmp

all: serial parallel_for parallel_for_critical

%.o : %.c
	${CC} ${CFLAGS} -o $@ $<

clean: 
	rm -f serial parallel_for parallel_for_critical serial.o parallel_for.o parallel_for_critical.o


