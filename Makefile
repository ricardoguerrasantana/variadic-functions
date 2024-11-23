# Target
TARGET = main

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRC = *.c

# Object files directory
OBJDIR = obj

# Object files
OBJ = $(SRC:%.c=$(OBJDIR)/%.o)

# Default target to build the executable
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(SRC) $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Rule to build the object files
$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the object files directory
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)
	rm -rf $(TARGET)

# Rule to clean up the directory
clean:
	rm -rf $(OBJDIR) $(TARGET)

# Phony targets
.PHONY: all clean
