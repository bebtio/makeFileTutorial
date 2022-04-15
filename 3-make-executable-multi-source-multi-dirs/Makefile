
# Now that the number of files is starting to grow,
# will create an obj directory were we will put our objects
# so we don't clutter the top level directory.

# Again, our executable will be called main with
# dependencies main.o and now myFuncs.o, except now
# we have to tell the recipe that our object files are in the obj
# directory so the compiler can find them.
main: main.o myFuncs.o
	g++ obj/main.o obj/myFuncs.o -o main

# Now that our source files are in different directories,
# the rules for making our objects files need that information.
# Also need to add the -I to tell it where header files are stored
# so the preprocesser can find and use them.
main.o: myFuncs.o
	g++ -c src/driver/main.cpp -I./include -o obj/main.o

myFuncs.o:
	g++ -c src/tools/myFuncs.cpp -I./include -o obj/myFuncs.o


clean:
	rm -rf obj/*.o \
	rm -rf main
