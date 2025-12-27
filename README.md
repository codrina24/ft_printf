*This project has been created as part of the 42 curriculum by coholbur.*

# ft_printf

Simulates the behavior of the standard `printf()` function.

## Description

This project consists of implementing different functions that reproduce part of the behavior of the standard C library `printf()` function. The objective is to understand how `printf()` works, when it is used, and how it handles different types of values. Exploring the basic design of this function helps to better understand its overall approach.

`ft_printf()` supports the following format specifiers:

- `%c` : Prints a single character.  
- `%s` : Prints a string.  
- `%p` : Prints a pointer in hexadecimal format.  
- `%d / %i` : Prints an integer in base 10.  
- `%u` : Prints an unsigned decimal number.  
- `%x / %X` : Prints a number in hexadecimal (lowercase / uppercase).  
- `%%` : Prints a percent sign.  

The library is compiled as a static library (`libftprintf.a`) that can be linked to other projects.

## Library Functions Overview

### Main Function
- `ft_printf`

### Conversion Functions
- `ft_printf_char`  
- `ft_printf_str`  
- `ft_printf_nbr`  
- `ft_printf_unsigned`  
- `ft_printf_hex`  
- `ft_printf_ptr`

### Parsing and Validation
- `ft_verify`

## Instructions

The project includes a `Makefile` with the following targets:

- `all` : Compiles the library.  
- `clean` : Removes object files.  
- `fclean` : Removes object files and the library.  
- `re` : Recompiles the library from scratch.  

To compile the library, run:
```bash
make
