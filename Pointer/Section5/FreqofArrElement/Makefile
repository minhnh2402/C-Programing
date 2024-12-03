# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -g -O2

# Project Structure
SRC = main.c  # Source files
OBJ = main.o  # Object files
BIN_DIR = bin # Directory for output files
TARGET = bin/program  # Full path to the executable

# Default Rule
all: $(TARGET)

# Rule to create the target executable
$(TARGET): $(OBJ)
	mkdir -p $(BIN_DIR)  # Ensure the bin directory exists
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean Rule
clean:
	rm -f $(OBJ) $(TARGET)
	rm -rf $(BIN_DIR)  # Optional: Remove bin directory
