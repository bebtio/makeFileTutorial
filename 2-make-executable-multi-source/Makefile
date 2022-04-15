

# Again, our executable will be called main with
# dependencies main.o and now myFuncs.o
main: main.o myFuncs.o
	g++ main.o myFuncs.o -o main

# Rule for making main.o, which now depends on myFuncs.o
# since we use the function printStr that is defined in myFuncs.hpp/cpp
main.o: myFuncs.o
	g++ -c main.cpp -o main.o

myFuncs.o:
	g++ -c myFuncs.cpp -o myFuncs.o


clean:
	rm -rf *.o \
	rm -rf main
