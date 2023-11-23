# C Programming Functions

This repository contains a collection of C functions that perform various operations, from manipulating bits to determining system endianness. These functions are designed to assist in different scenarios related to bitwise operations, binary conversions, and system properties.

## Functions Included

### Binary Manipulation

1. **`unsigned int binaryToUnsignedInt(const char *b)`**
   - Converts a binary number represented as a string to an unsigned integer.

2. **`void printBinary(unsigned int num)`**
   - Prints the binary representation of an unsigned integer.

3. **`int getBitValue(unsigned int num, int index)`**
   - Returns the value of a bit at a given index in an unsigned integer.

4. **`int setBitToOne(unsigned int *num, int index)`**
   - Sets the value of a bit at a given index to 1 in an unsigned integer.

5. **`int setBitToZero(unsigned int *num, int index)`**
   - Sets the value of a bit at a given index to 0 in an unsigned integer.

6. **`int countBitsToFlip(unsigned int num1, unsigned int num2)`**
   - Calculates the number of bits needed to be flipped to get from one number to another.

7. **`int checkEndianness()`**
   - Checks the system's endianness (big-endian or little-endian).

## Usage

Each function is contained within a separate C file and can be easily included and utilized within your C projects. Follow the instructions provided within each function's file to incorporate them into your code.

Feel free to explore and utilize these functions in your projects. Contributions and improvements are welcome!

## Contribution

If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request. Your contributions are greatly appreciated!

