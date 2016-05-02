# -Wall means display all warnings (isn't actually _all_ warnings)
# -g tells the compiler to include debug information
CFLAGS=-Wall -Wextra -g

# target: all - build ex1 c program
all:
	make ex1
	make ex3

# target: clean - remove any files generates from previous build.
clean:
		rm -f ex[1-9]
		rm -f notes.html
		rm -r ex[1-9].dSYM

# target: notes - build html from the notes in markdown
notes:
	  md2html notes.md > notes.html

# target: help - Display callable targets
help:
		egrep "^# target:" [Mm]akefile
