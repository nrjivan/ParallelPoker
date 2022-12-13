CC=g++
CFLAGS=-c -Wall
OMP=-fopenmp
ALL=hillclimb.o quarticopt.o poker.o quarticopt poker 

all: $(ALL)

hillclimb.o: hillclimb.h hillclimb.cpp
	$(CC) $(CFLAGS) hillclimb.cpp

poker.o: poker.h poker.cpp
	$(CC) $(CFLAGS) poker.cpp

poker: poker.o hillclimb.o
	$(CC) hillclimb.o poker.o -o $@

clean: 
	rm $(ALL)

