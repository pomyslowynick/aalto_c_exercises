CHECK_CFLAGS=$(shell pkg-config --cflags check)
CHECK_LDFLAGS=$(shell pkg-config --libs check)
SRC_FILES=test_source.c tmc-check.c ../src/source.c checkhelp.c

all: test

test: $(SRC_FILES)
	gcc $(CHECK_CFLAGS) -g -Wall -Wextra -std=c99 -o $@ $(SRC_FILES) $(CHECK_LDFLAGS) -lm

clean:
	rm -f test tmc_available_points.txt tmc_test_results.xml valgrind.log mockinput mockoutput

run: test
	# Printing available points
	./test --print-available-points
	./test command line arguments
get-points:
	./test --print-available-points
