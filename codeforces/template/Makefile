CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: a b c d e

clean:
	rm -f *.o a b c d e

a: a.cpp in.txt
	$(CXX) $(CXXFLAGS) -o a a.cpp
	./a < in.txt

b: b.cpp in.txt
	$(CXX) $(CXXFLAGS) -o b b.cpp
	./b < in.txt

c: c.cpp in.txt
	$(CXX) $(CXXFLAGS) -o c c.cpp
	./c < in.txt

d: d.cpp in.txt
	$(CXX) $(CXXFLAGS) -o d d.cpp
	./d < in.txt

e: e.cpp in.txt
	$(CXX) $(CXXFLAGS) -o e e.cpp
	./e < in.txt
