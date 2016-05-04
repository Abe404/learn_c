# -Wall means display all warnings (isn't actually _all_ warnings)
# -g tells the compiler to include debug information
CFLAGS=-Wall -Wextra -g

# target: all - build ex1 c program
all: src/ex1 src/ex3 src/ex4 src/ex5

# target: clean - remove any files generates from previous build.
clean:
		rm -f src/ex1
		rm -f src/ex3
		rm -f src/ex4
		rm -f src/ex5
		rm -f -r src/ex[1-9].dSYM

# target: noteshtml - build html from the notes in markdown
noteshtml:
		touch notes/notes.html
		cat notes/notes_header.html > notes/notes.html
	  md2html notes/notes.md >> notes/notes.html

# target: help - Display callable targets
help:
		egrep "^# target:" [Mm]akefile
