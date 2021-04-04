CXX=CC
CXXFLAGS= -g -O3 -ffast-math -mavx2
LDFLAGS= -lm

nbody_seperated: nbody_seperated.o forces.o initial_conditions.o

nbody_seperated.o: nbody_seperated.cpp forces.h initial_conditions.h particles.h

forces.o: forces.cpp forces.h particles.h

initial_conditions.o: initial_conditions.cpp initial_conditions.h particles.h

nbody: nbody.cpp

clean:
	rm -f nbody nbody_seperated nbody_seperated.o forces.o initial_conditions.o
