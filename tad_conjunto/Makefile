COMP = g++
FLAGS = -Wall -std=c++17

all: main

main: main.o conjunto.o
	$(COMP) $(FLAGS) main.o conjunto.o -o main

main.o: main.cpp conjunto.h
	$(COMP) $(FLAGS) -c main.cpp -o main.o

conjunto.o: conjunto.cpp conjunto.h
	$(COMP) $(FLAGS) -c conjunto.cpp -o conjunto.o

clean:
	rm -rf *.o

run: main
	./main