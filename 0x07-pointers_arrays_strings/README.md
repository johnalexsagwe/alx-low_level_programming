# 0x07. C - Even more pointers, arrays, and strings

This repository contains C programs that demonstrate various concepts related to pointers, arrays, and strings. The project aims to help you understand how to work with pointers and arrays effectively and how to manipulate strings without using the standard library functions.

## Author
John Alex Sagwe

## Date
Monday, 31st July 2023

## Tasks Summary:

1. **memset**: Write a function that fills memory with a constant byte.
   - Prototype: `char *_memset(char *s, char b, unsigned int n);`
   - This function fills the first n bytes of the memory area pointed to by s with the constant byte b.
   - Returns a pointer to the memory area s.

2. **memcpy**: Write a function that copies memory area.
   - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
   - This function copies n bytes from memory area src to memory area dest.
   - Returns a pointer to dest.

3. **strchr**: Write a function that locates a character in a string.
   - Prototype: `char *_strchr(char *s, char c);`
   - Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.

4. **strspn**: Write a function that gets the length of a prefix substring.
   - Prototype: `unsigned int _strspn(char *s, char *accept);`
   - Returns the number of bytes in the initial segment of s which consist only of bytes from accept.

5. **strpbrk**: Write a function that searches a string for any of a set of bytes.
   - Prototype: `char *_strpbrk(char *s, char *accept);`
   - Locates the first occurrence in the string s of any of the bytes in the string accept.
   - Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.

6. **strstr**: Write a function that locates a substring.
   - Prototype: `char *_strstr(char *haystack, char *needle);`
   - Finds the first occurrence of the substring needle in the string haystack.
   - Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.

7. **print_chessboard**: Write a function that prints the chessboard.
   - Prototype: `void print_chessboard(char (*a)[8]);`

8. **print_diagsums**: Write a function that prints the sum of the two diagonals of a square matrix of integers.
   - Prototype: `void print_diagsums(int *a, int size);`

9. **set_string**: Write a function that sets the value of a pointer to a char.
   - Prototype: `void set_string(char **s, char *to);`

## Files Created in This Assignment:

1. `0-memset.c`: Implementation of the `_memset` function.
2. `1-memcpy.c`: Implementation of the `_memcpy` function.
3. `2-strchr.c`: Implementation of the `_strchr` function.
4. `3-strspn.c`: Implementation of the `_strspn` function.
5. `4-strpbrk.c`: Implementation of the `_strpbrk` function.
6. `5-strstr.c`: Implementation of the `_strstr` function.
7. `7-print_chessboard.c`: Implementation of the `print_chessboard` function.
8. `8-print_diagsums.c`: Implementation of the `print_diagsums` function.
9. `100-set_string.c`: Implementation of the `set_string` function.
10. `101-crackme_password`: Contains the password for the `crackme2` executable.

## Compilation

All the C programs in this repository should be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`. For example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
```

## Style

All the C code in this repository should follow the Betty style. The code will be checked using `betty-style.pl` and `betty-doc.pl`.

Enjoy learning and happy coding!
