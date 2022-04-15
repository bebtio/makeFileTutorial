

all: main preprocessor compiler assembler

main:
	g++ main.cpp -o main

preprocessor:
	g++ -E main.cpp -o main.i

compiler:
	g++ -S main.cpp -o main.s

assembler:
	g++ -c main.cpp -o main.o


clean:
	@rm -rf main \
	rm -rf main.i \
	rm -rf main.s \
	rm -rf main.o
