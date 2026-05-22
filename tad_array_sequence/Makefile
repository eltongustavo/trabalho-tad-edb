COMP = g++
FLAGS = -Wall -std=c++17

all: main

main: main.o arraysequence.o
	$(COMP) $(FLAGS) main.o arraysequence.o -o main

main.o: main.cpp arraysequence.h
	$(COMP) $(FLAGS) -c main.cpp -o main.o

arraysequence.o: arraysequence.cpp arraysequence.h
	$(COMP) $(FLAGS) -c arraysequence.cpp -o arraysequence.o

clean:
	rm -rf *.o

run: main
	./main