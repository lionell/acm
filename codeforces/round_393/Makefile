all: main.o
	g++ -o main main.o

clean:
	rm -f *.o main

main.o: main.cpp
	g++ -c main.cpp

run: all
	./main < in.txt
