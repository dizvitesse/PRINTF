*This project has been created as part of the 42 curriculum by rsabbar.*

# ft_printf

## Description

ft_printf is a project from the 42 curriculum. The goal is to recreate the behaviour of the standard C `printf()` function.

The project focuses on variadic functions, format string parsing, and handling different data types. Instead of using the original `printf()`, the implementation uses the `write()` function to print characters to the standard output.

## Supported conversions

| Conversion | Description |
| --- | --- |
| `%c` | Prints a character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a decimal number. |
| `%i` | Prints an integer. |
| `%u` | Prints an unsigned decimal number. |
| `%x` | Prints a number in lowercase hexadecimal. |
| `%X` | Prints a number in uppercase hexadecimal. |
| `%%` | Prints a percent sign. |

## Technical overview

### Variadic functions

The project uses `stdarg.h` to handle a variable number of arguments.

The main macros are:

- `va_list`: stores the argument list.
- `va_start`: initializes the argument list.
- `va_arg`: retrieves the next argument.
- `va_end`: ends the argument processing.

### Format parsing

The `ft_printf()` function reads the format string character by character.

When it encounters `%`, it checks the next character to identify the conversion and calls the corresponding helper function.

### Number conversion

Recursive functions are used to print decimal and hexadecimal numbers in the correct order.

For hexadecimal conversion, a base-16 character table is used to select the corresponding digit.

## Algorithm and data structure

The main algorithm is based on iterating through the format string and dispatching each conversion to its corresponding helper function.

`va_list` is used to access the additional arguments in the order they are passed.

The implementation uses basic C data types such as `int`, `unsigned int`, `unsigned long`, and `char *` to handle the different conversions.

A character counter keeps track of the total number of characters printed, which is returned by `ft_printf()`.

## Instructions

### Requirements

To compile the library, you need:

- `cc` (a C compiler)
- `make`
- `ar`

### Compilation

Run these commands from the root of the repository:

```bash
make        # Compiles the source files and creates libftprintf.a
make clean  # Removes the object files
make fclean # Removes the object files and libftprintf.a
make re     # Rebuilds the library
```

### Using the library

Include `ft_printf.h` in your C file and link your program with `libftprintf.a`.

Example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Number: %d\n", "42", 42);
    return (0);
}
```

Compile and run:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a -o program
./program
```

## Resources

### References

- The ft_printf project subject.
- Linux manual pages (`man`): https://man7.org/linux/man-pages/
- C reference: https://en.cppreference.com/w/c
- Variadic functions: https://en.cppreference.com/w/c/variadic.html
- 42 documentation: https://harm-smits.github.io/42docs/

### Peer learning

Discussing ideas with other students and comparing implementations helped me understand different approaches to the project.

### Use of AI

AI was used as a learning tool to clarify concepts, understand variadic functions, and help investigate errors during development.

## What I learned

This project helped me understand variadic functions, argument handling, recursion, and format string parsing. I also gained more experience with pointers, data types, and working with the `write()` function.
