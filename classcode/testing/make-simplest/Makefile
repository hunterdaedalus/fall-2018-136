CXXFLAGS=-std=c++11
main: main.o fact.o
	g++ -o main main.o fact.o

main.o: main.cpp fact.h
	g++ $(CXXFLAGS) -c main.cpp

fact.o: fact.cpp fact.h
	g++ $(CXXFLAGS) -c fact.cpp



tests: tests.o fact.o
	g++ -o tests tests.o fact.o
        
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o fact.o tests.o 
