# make
# ENV=TEST make

P = expecto
OBJECTS = main.o memory.o vm.o
CFLAGS = -g -Werror -O3 -std=c11
LDFLAGS =
LDLIBS =
CC = gcc

REBUILDABLES = $(OBJECTS) $(P)
ENV ?= DEV

# SRC=$(wildcard *.c)

all: $(P)
	
$(P): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(P) $(OBJECTS) $(LDFLAGS)

%.o: %.c
	$(CC) -D$(ENV) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(REBUILDABLES)
