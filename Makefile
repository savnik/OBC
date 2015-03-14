# OBC Makefile

CC=gcc
CFLAGS=-Wall
LIBS=

#Destination directories
BUILDDIR := build

# Sources
SRC := main.c

# Create list of objects
OBJ := $(SRC:.c=.o)

EXECUTABLE := obc

all: stable
	#Execute make in all plugin folders
	@echo -n "   * Compliling plugins..\n"
	@$(MAKE) -s -C plugins
	@echo "Done"

debug:clean
	$(CC) $(CFLAGS) -g -o $(EXCUTABLE) $(SRC) $(LIBS)
stable:clean
	$(CC) $(CFLAGS) -o obc $(EXCUTABLE) $(SRC) $(LIBS)
clean:
	rm -vfr *~ obc
