all: main

main: main.o cycle.o controller.o
	g++ main.o cycle.o controller.o -o help

main.o: 
	g++ -c main.cpp
cycle.o:
	g++ -c cycle.cpp
controller.o:
	g++ -c controller.cpp

clean:
	rm -rf *.o
	rm help