*This project has been created as part of the 42 curriculum by coholbur*

# Ft_printf
Simulates the behavior of the standard printf() function

## Description

This project consists of implementing different functions that reproduce part of the behavior of the standard C library function printf().
The objective is to understand how printf() works, when it is used, and how it handles different types of values. Exploring the basic design of this function helps to better understand its overall approach.

`ft_printf()` supports the following format specifiers:  
- `%c` : Prints a single character.  
- `%s` : Prints a string.  
- `%p` : Prints a pointer in hexadecimal format.  
- `%d` / `%i` : Prints an integer in base 10.  
- `%u` : Prints an unsigned decimal number.  
- `%x` / `%X` : Prints a number in hexadecimal (lowercase / uppercase).  
- `%%` : Prints a percent sign.  

The library is compiled as a static library (`ft_printf.a`) that can be linked to other projects.

## Instructions

### Compilation
The project includes a `Makefile` with the following targets:  
- `all` : Compiles the library.  
- `clean` : Removes object files.  
- `fclean` : Removes object files and the library.  
- `re` : Recompiles the library from scratch.
To compile the library, run:
```bash
make
```
## Resources

- **Peer-to-peer learning** – was the most valuable resource; this project was developed with guidance and collaboration from other 42 students
- **man pages** – Used extensively to check function behavior, parameters, and return values. (The man from bash!)
- **Books** – Classic references to learn C from scratch and understand various programming notions
- **Tutorials and articles** – Consulted to better understand specific C concepts and function implementations.

### AI Assistance

AI tools were used to help:
- Create diagrams and schemas to visualize how functions work and how data flows
- Provide examples of how to apply these concepts in practice
- Design the banner for this README.

No AI was used to write the functions directly; all code logic and implementation are my own work and personal vision.

## Library Functions Overview
