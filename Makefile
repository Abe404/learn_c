# -Wall means display all warnings (isn't actually _all_ warnings)
# -g tells the compiler to include debug information
CFLAGS=-Wall -Wextra -g
RM=rm -f
CC=clang

SOURCE_DIR=./src/
PROGRAM_DIR=./bin/

SOURCE_FILES = $(wildcard $(SOURCE_DIR)*.c)
PROGRAM_FILES = $(patsubst %.c,%,$(patsubst $(SOURCE_DIR)%,$(PROGRAM_DIR)%,$(SOURCE_FILES)))

# target: all - build ex1 c program
.PHONY: all
all: $(PROGRAM_FILES)

$(PROGRAM_DIR)%: $(SOURCE_DIR)%.c
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

# target: clean - remove any files generates from previous build.
.PHONY: clean
clean:
		$(RM) $(PROGRAM_FILES)
		rm -f -r src/ex[1-9].dSYM

# target: noteshtml - build html from the notes in markdown
.PHONY: notes
notes:
		touch notes/notes.html
		cat notes/notes_header.html > notes/notes.html
	  md2html notes/notes.md >> notes/notes.html

# target: help - Display callable targets
help:
		egrep "^# target:" [Mm]akefile
