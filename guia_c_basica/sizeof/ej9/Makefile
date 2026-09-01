CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = ej9

.PHONY: all run clean

all: run clean

run: $(TARGET)
	./$(TARGET)
$(TARGET): $(TARGET).o
	$(CC) $(CFLAGS) $^ -o $@
$(TARGET).o: $(TARGET).c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -fv *.o *.exe $(TARGET)
