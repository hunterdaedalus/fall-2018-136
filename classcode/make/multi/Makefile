CXXFLAGS=-std=c++14
LDFLAGS=
OBJECTS=main.o circ_funcs.o

main: main.o circ_funcs.o
	g++ -o main main.o circ_funcs.o

circ_funcs.o: circ_funcs.cpp circ_funcs.h
main.o: main.cpp circ_funcs.h


clean:
	rm -f $(OBJECTS)
