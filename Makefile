.PHONY: clean build
CHAPTER=chapter-1-a-tutorial-introduction
EXERCISE=1-9

all: clean build run

clean:
	rm ./build/*.out

build:
	gcc -Wall -o ./build/${EXERCISE}.out "./src/${CHAPTER}/${EXERCISE}.c"

run:
	./build/${EXERCISE}.out
