*This project has been created as part of the 42 curriculum by Itakaah.*

# ft_printf

## Description

ft_printf is a reimplementation of the `printf()` function from the C standard library. The goal of this project is to learn how to use variadic functions in C and understand how string formatting works.

The function takes a format string and a variable number of arguments, then prints the formatted result to standard output.

### Supported conversions

- `%c` : prints a character
- `%s` : prints a string
- `%p` : prints a pointer in hexadecimal
- `%d` : prints a decimal number (base 10)
- `%i` : prints an integer in base 10
- `%u` : prints an unsigned decimal number
- `%x` : prints a number in hexadecimal (lowercase)
- `%X` : prints a number in hexadecimal (uppercase)
- `%%` : prints a percent sign

## Instructions

### Compilation

To compile the library:

```bash
make
```

This will create the `libftprintf.a` file at the root of the project.

### Usage

To use ft_printf in your project:

1. Include the header:
```c
#include "ft_printf.h"
```

2. Compile with the library:
```bash
cc main.c libftprintf.a
```

### Makefile rules

- `make` or `make all` : compiles the library
- `make clean` : deletes object files
- `make fclean` : deletes object files and the library
- `make re` : recompiles everything

## Algorithm and data structures

### Project architecture

I chose to separate the code into multiple files to make it clearer:

```
ft_printf/
├── ft_printf.c      # main function
├── ft_printf.h      # header with prototypes
├── Makefile
└── utils/
    ├── ft_putchar.c         # prints a char
    ├── ft_putstr.c          # prints a string
    ├── ft_putnbr.c          # prints an int
    ├── ft_putnbr_unsigned.c # prints an unsigned int
    ├── ft_puthex.c          # prints in hexadecimal
    └── ft_putpointer.c      # prints a pointer
```

### How it works

1. `ft_printf` goes through the format string character by character
2. When we find a `%`, we look at the next character to know which conversion to do
3. We call `handle_format` which dispatches to the right function depending on the specifier
4. Each function returns the number of characters printed
5. We add everything up to return the total at the end

### Special cases handling

- **NULL string** : prints "(null)"
- **NULL pointer** : prints "(nil)" on Linux
- **INT_MIN (-2147483648)** : handled directly with write because we can't do `-n` on it

## Resources

### Documentation used

- man printf -> to understand printf behavior
- man stdarg -> for va_start, va_arg, va_end functions

### Useful links

- [GNU documentation on printf](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output-Functions.html)
- [Tutorial on variadic functions](https://en.cppreference.com/w/c/variadic)

### AI usage

I used AI for:
- Understanding some concepts like variadic functions
- Debugging some segfault errors
- Checking my code logic
- Creating exhaustive test codes
