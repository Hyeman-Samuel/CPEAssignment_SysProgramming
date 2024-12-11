# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Target executable
TARGET = main

# Build target
all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

calculator.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Clean target
clean:
	rm -f $(TARGET) main.o
