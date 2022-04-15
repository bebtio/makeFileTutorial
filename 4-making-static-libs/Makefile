
# Here we will have two rules: one to build the static library, and another
# to build the main executable.

# This creates an executable called main that requires myLib.a and myFuncs.o
# to compile.  make will look for any rules called myLib.a and myFuncs.o in
# this file and run the command under it.  It will then put main inside the
# bin directory.
main: main.o myFuncs.o myLib.a
	g++ obj/main.o obj/myFuncs.o bin/myLib.a -o bin/main

# This will build myLib.a without creating the executable.
staticLibs: myLib.a

# This tells make that myLib.a needs myFuncs.o and myMath.o to build myLib.a
# which will then be put inside the bin directory.
myLib.a: myMath.o myPrint.o
	ar rvs bin/myLib.a obj/myMath.o obj/myPrint.o

# Tells make that main.o requires main.cpp, the includes inside of the include
# and myLibFiles directory, and to put the output at obj with the name main.o.
main.o:
	g++ -c src/driver/main.cpp -I./include -I./myLibFiles -o obj/main.o

# Tells make that myFuncs.o requies myFuncs.cpp and the includes inside of the
# include directory, and to put the output at obj with the name myFuncs.o.
myFuncs.o:
	g++ -c src/tools/myFuncs.cpp -I./include -o obj/myFuncs.o

# Tells make that myMath.o requies myMath.cpp and the includes inside of the
# myLibFiles directory, and to put the output at obj with the name myMath.o.
myMath.o:
	g++ -c myLibFiles/myMath.cpp -I./myLibFiles -o obj/myMath.o

# You get the idea...
myPrint.o:
	g++ -c myLibFiles/myPrint.cpp -I./myLibFiles -o obj/myPrint.o

# Remove all the files from inside the obj and bin directories,
# as well as the executable called main.
clean:
	rm -rf obj/* \
	rm -rf main \
	rm -rf bin/*
