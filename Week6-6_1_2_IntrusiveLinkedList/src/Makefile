SRC_FILES=main.c intrusive_list.c

all: main

main: $(SRC_FILES)
	gcc -g -std=c99 -Wall -o $@ $(SRC_FILES)

clean:
	rm -rf main main.dSYM

run: main
	# Running our main function from file main.c
	valgrind ./main
