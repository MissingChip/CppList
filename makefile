
lib_d = list.h list.hpp list.cpp

library: liblist.a list.h

test: $(lib_d) list_test.cpp
	g++ -o list_test list_test.cpp -L. -llist

liblist.a: list.o $(lib_d)
	ar -rcs ../liblist.a list.o

list.h:
	cp list.h ../list.h

list.o: $(lib_d)
	g++ -c list.cpp -o list.o

.PHONY: list.h
