.PHONY: clean build

clean:
	rm ./build/*.out

build:
	gcc -Wall -o ./build/1-1.out ./src/chapter-1-a-tutorial-introduction/1-1.c