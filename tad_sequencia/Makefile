COMP = g++
FLAGS = -Wall -std=c++17

all: main

main: main.o no.o sequencia.o    
	$(COMP) $(FLAGS) main.o no.o sequencia.o -o main

main.o: main.cpp no.h sequencia.h
	$(COMP) $(FLAGS) -c main.cpp -o main.o

no.o: no.cpp no.h
	$(COMP) $(FLAGS) -c no.cpp -o no.o

sequencia.o: sequencia.cpp sequencia.h
	$(COMP) $(FLAGS) -c sequencia.cpp -o sequencia.o

clean:
	rm -rf *.o main

run: main
	./main