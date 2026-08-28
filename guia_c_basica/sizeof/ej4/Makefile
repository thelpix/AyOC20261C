CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = ej4

.PHONY: all run clean

all: run clean

run: $(TARGET)
	./$(TARGET)
$(TARGET): ej4.o
	$(CC) $(CFLAGS) $^ -o $@
ej4.o: ej4.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -fv *.o *.exe $(TARGET)
