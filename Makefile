CC = gcc
AR = ar
CFLAGS = -Wall -g
OBJS = cmp.o
OUT = cmp

cmp.o: cmp.c
	$(CC) $(CFLAGS) -c cmp.c

all: $(OBJS)
	$(CC) $(CFLAGS) -o $(OUT) $(OBJS)

clean:
	rm -f $(OBJS) $(OUT)

.PHONY: clean all