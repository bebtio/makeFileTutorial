
# Here we will have two rules: one to build the shared/dynaic library, and another
# to build the main executable.

# This creates an executable called main that requires libmyLib.so and myFuncs.o
# to compile.  make will look for any rules called libmyLib.so and myFuncs.o in
# this file and run the command under it.  It will then put main inside the
# bin directory.
# -L flag is now needed to tell your program where to find the shared libary at
# compile time.
# -rpath flag tells you program where to find the library at run time.
# -Wl flag passes the rpath argument to the linker.
main: main.o myFuncs.o libmyLib.so
	g++ obj/main.o obj/myFuncs.o -Wl,-rpath=./bin/ -L./bin/ -lmyLib -o bin/main

# This will build libmyLib.so without creating the executable.
dynamicLibs: libmyLib.so

# This tells make that libmyLib.so needs myFuncs.o and myMath.o to build libmyLib.so
# which will then be put inside the bin directory.
libmyLib.so: myMath.o myPrint.o
	g++ -shared -o bin/libmyLib.so obj/myMath.o obj/myPrint.o

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
# Need the new -fpic flag to make the object file position independent in order
# to compile into shared library.
myMath.o:
	g++ -c -fpic myLibFiles/myMath.cpp -I./myLibFiles -o obj/myMath.o

# You get the idea...
myPrint.o:
	g++ -c -fpic myLibFiles/myPrint.cpp -I./myLibFiles -o obj/myPrint.o

# Remove all the files from inside the obj and bin directories,
# as well as the executable called main.
clean:
	rm -rf obj/* \
	rm -rf main \
	rm -rf bin/*
