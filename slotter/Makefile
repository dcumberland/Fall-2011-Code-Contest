#  Fall 2011 Code Contest
#  @author Tyler Shopshire (tshopshi@calpoly.edu)
#  @author Michele Jenkins (mkjenkin@calpoly.edu)

CC=gcc
CFLAGS=-Wall -g -ansi -pedantic -D_XOPEN_SOURCE=500
LDFLAGS=

ALL=   solver builder

all:	$(ALL)

solver:	solver.c
	$(CC) $(CFLAGS) -o $@ $<

builder: Builder.java
	javac $<

clean:
	rm -f core* *.o *.class $(ALL)

