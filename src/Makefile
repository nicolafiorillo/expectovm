#
# Build and run:
# make clean && make && ./expecto
#
# Build test and run:
# make clean && ENV=TEST make && ./expecto
#
# Verify memory issues:
# valgrind ./expecto
#

P = expecto

OBJECTS = main.o 			\
					memory.o 		\
					vm.o 				\
					test_main.o \
					test_vm.o

CFLAGS = -g -Werror -O0 -std=c11 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
LDFLAGS = -lglib-2.0
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
