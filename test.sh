#!/bin/bash

# Compile the C program
gcc -o pointers_assignment hello.c

# Check if compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# Run the compiled program
./pointers_assignment

# Check if all tests passed
if ./pointers_assignment | grep -q "FAILED"; then
    echo "Some tests failed."
else
    echo "All tests passed!"
fi

# Clean up the compiled program
rm pointers_assignment