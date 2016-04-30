# -Wall means display all warnings (isn't actually _all_ warnings)
# -g tells the compiler to include debug information
CFLAGS=-Wall -g

# target: all - build ex1 c program
all:
	make ex1

# target: clean - remove any files generates from previous build.
clean:
		rm -f ex1
		rm -r ex1.dSYM

# target: help - Display callable targets
help:
		egrep "^# target:" [Mm]akefile
