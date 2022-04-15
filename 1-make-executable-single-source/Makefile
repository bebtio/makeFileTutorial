
# Make has a format for building sources called rules. Has format:
# TARGET : dependencies
#	recipe

# Where target is the thing we are going to build, recipe is the command required to build
# our target, and dependencies are things that need to be built
# before our target's recipe can be executed.


# This rule says to build our TARGET called main and that our TARGET depends on a file
# called main.o.  Make will build our dependencies first, in this case main.o, before
# building our TARGET with the command on the second line.  In order for make to build
# our dependency, main.o, we must also define a rule for how it should be made.
main : main.o
	g++ main.o -o main


# Here is our rule for building main.o.
# Tells make to build main.o with main.cpp.
main.o :
	g++ -c main.cpp -o main.o

clean:
	rm -rf main.o \
	rm -rf main 
