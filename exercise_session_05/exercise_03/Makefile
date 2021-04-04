CC=CC
CXXFLAGS= -O3 -ffast-math -mavx2
LDFLAGS= -fopenmp -lm

nbody_omp: nbody_omp.o gettime.o
gettime.o: gettime.cpp gettime.h
nbody_omp.o: nbody_omp.cpp gettime.h
nbody_serial: nbody_serial.o gettime.o
nbody_serial.o: nbody_serial.cpp gettime.h

clean: 
	rm -f nbody_omp gettime.o nbody_omp.o nbody_serial nbody_serial.o
