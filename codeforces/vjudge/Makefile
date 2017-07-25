all: main

clean:
	rm -f main

run: main in.txt
	./main < in.txt

main: main.cc
	$(CXX) -o main main.cc
