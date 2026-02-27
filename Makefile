# Makefile for Pi Calculator
# Original concept by Yunus Emre Vurgun
# Enhanced version 2026

CC = gcc
CFLAGS = -Wall -Wextra -O2 -std=c11
LDFLAGS = -lm
TARGET = pi_calculator
LEGACY_TARGET = multiPi
SOURCE = pi_calculator.c
LEGACY_SOURCE = C\ program\ that\ multiplies\ input\ with\ Pi/multiPi.c

.PHONY: all clean run legacy help install

# Default target
all: $(TARGET)

# Build modern version
$(TARGET): $(SOURCE)
	@echo "Building modern Pi Calculator..."
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE) $(LDFLAGS)
	@echo "Build complete! Run with: ./$(TARGET)"

# Build legacy version
legacy: $(LEGACY_SOURCE)
	@echo "Building legacy version..."
	$(CC) $(CFLAGS) -o $(LEGACY_TARGET) "$(LEGACY_SOURCE)" $(LDFLAGS)
	@echo "Legacy build complete! Run with: ./$(LEGACY_TARGET)"

# Run the program
run: $(TARGET)
	@./$(TARGET)

# Run in batch mode
batch: $(TARGET)
	@./$(TARGET) --batch

# Clean build artifacts
clean:
	@echo "Cleaning build artifacts..."
	@rm -f $(TARGET) $(LEGACY_TARGET)
	@rm -f *.o
	@echo "Clean complete!"

# Install to system (requires sudo)
install: $(TARGET)
	@echo "Installing to /usr/local/bin..."
	@sudo cp $(TARGET) /usr/local/bin/
	@sudo chmod 755 /usr/local/bin/$(TARGET)
	@echo "Installation complete! Run with: pi_calculator"

# Uninstall from system
uninstall:
	@echo "Uninstalling from /usr/local/bin..."
	@sudo rm -f /usr/local/bin/$(TARGET)
	@echo "Uninstall complete!"

# Show help
help:
	@echo "Pi Calculator - Makefile Commands"
	@echo "=================================="
	@echo "make          - Build the modern Pi Calculator"
	@echo "make legacy   - Build the legacy version"
	@echo "make run      - Build and run the program"
	@echo "make batch    - Run in batch mode"
	@echo "make clean    - Remove build artifacts"
	@echo "make install  - Install to /usr/local/bin (requires sudo)"
	@echo "make uninstall- Remove from /usr/local/bin (requires sudo)"
	@echo "make help     - Show this help message"
