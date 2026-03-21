CC = gcc
CFLAGS = -Wall -Wextra -g

%: %.c
	$(CC) $(CFLAGS) $< -o main

clean:
	rm -f main

run: main
	./main