CC = gcc
CFLAGS = -Wall
OBJECTS = mySubstring.o

all: mySubstring

mySubstring.o: mySubstring.c
	$(CC) $(CFLAGS) -c mySubstring.c

mySubstring: $(OBJECTS)
	$(CC) $(OBJECTS) -o mySubstring

clean:
	rm -f *.o mySubstring
