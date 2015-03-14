# OBC Makefile

CC=gcc
CFLAGS=-Wall
LIBS=

#Destination directories
BUILDDIR := build

# Sources
SRC := adc10chi2c.c

# Create list of objects
OBJ := $(SRC:.c=.o)

EXECUTABLE := obc

all: stable

debug:clean
	$(CC) $(CFLAGS) -g -o $(EXCUTABLE) $(SRC) $(LIBS)
stable:clean
	$(CC) $(CFLAGS) -o obc $(EXCUTABLE) $(SRC) $(LIBS)
clean:
	rm -vfr *~ obc
