Project Title: alx-low_level_programming
This project contains several tasks related to pointers, arrays, and strings in the C programming language. Each task involves writing specific functions to perform various operations on strings or arrays. Below is a brief description of each task and the files created for the project:

Task 0: strcat
Description:
This task requires writing a function that concatenates two strings. The function should append the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then add a terminating null byte.

Function Prototype:
c
Copy code
char *_strcat(char *dest, char *src);
Files Created:
0-main.c: A sample main function to test the _strcat function.
0-strcat.c: The implementation of the _strcat function.
main.h: Header file containing function prototypes.
Task 1: strncat
Description:
This task requires writing a function that concatenates two strings, similar to Task 0 (_strcat), but with a limitation on the number of characters to concatenate (n). The function should use at most n bytes from src, and src does not need to be null-terminated if it contains n or more bytes.

Function Prototype:
c
Copy code
char *_strncat(char *dest, char *src, int n);
Files Created:
1-main.c: A sample main function to test the _strncat function.
1-strncat.c: The implementation of the _strncat function.
main.h: Header file containing function prototypes.
Task 2: strncpy
Description:
This task requires writing a function that copies a string, similar to the standard library function strncpy. The function should copy n characters from src to dest. If src is shorter than n characters, the remaining bytes in dest should be filled with null bytes (\0).

Function Prototype:
c
Copy code
char *_strncpy(char *dest, char *src, int n);
Files Created:
2-main.c: A sample main function to test the _strncpy function.
2-strncpy.c: The implementation of the _strncpy function.
main.h: Header file containing function prototypes.
Task 3: strcmp
Description:
This task requires writing a function that compares two strings, similar to the standard library function strcmp. The function should compare the characters of the two strings and return an integer representing their relationship: 0 if the strings are equal, a positive value if s1 is greater than s2, and a negative value if s1 is less than s2.

Function Prototype:
c
Copy code
int _strcmp(char *s1, char *s2);
Files Created:
3-main.c: A sample main function to test the _strcmp function.
3-strcmp.c: The implementation of the _strcmp function.
main.h: Header file containing function prototypes.
Task 4: reverse_array
Description:
This task requires writing a function that reverses the content of an array of integers. The function should modify the array a in place and reverse its content.

Function Prototype:
c
Copy code
void reverse_array(int *a, int n);
Files Created:
4-main.c: A sample main function to test the reverse_array function.
4-rev_array.c: The implementation of the reverse_array function.
main.h: Header file containing function prototypes.
Task 5: string_toupper
Description:
This task requires writing a function that changes all lowercase letters of a string to uppercase. The function should modify the string str in place.

Function Prototype:
c
Copy code
char *string_toupper(char *str);
Files Created:
5-main.c: A sample main function to test the string_toupper function.
5-string_toupper.c: The implementation of the string_toupper function.
main.h: Header file containing function prototypes.
Task 6: cap_string
Description:
This task requires writing a function that capitalizes all words of a string. The function should modify the string str in place. Words are separated by spaces, tabs, new lines, commas, semicolons, periods, exclamation marks, question marks, double quotes, parentheses, and braces.

Function Prototype:
c
Copy code
char *cap_string(char *str);
Files Created:
6-main.c: A sample main function to test the cap_string function.
6-cap_string.c: The implementation of the cap_string function.
main.h: Header file containing function prototypes.
Task 7: leet
Description:
This task requires writing a function that encodes a string into 1337 (leet speak). The function should modify the string str in place by replacing certain letters with their corresponding numbers or symbols.

Function Prototype:
c
Copy code
char *leet(char *str);
Files Created:
7-main.c: A sample main function to test the leet function.
7-leet.c: The implementation of the leet function.
main.h: Header file containing function prototypes.
Task 8: rot13
Description:
This task requires writing a function that encodes a string using the ROT13 cipher. The function should modify the string str in place by replacing each letter with the letter 13 positions ahead in the alphabet (wrapping around if necessary).

Function Prototype:
c
Copy code
char *rot13(char *str);
Files Created:
100-main.c: A sample main function to test the rot13 function.
100-rot13.c: The implementation of the rot13 function.
main.h: Header file containing function prototypes.
Task 9: print_number
Description:
This task requires writing a function that prints an integer. The function should use _putchar to print the integer.

Function Prototype:
c
Copy code
void print_number(int n);
Files Created:
_putchar.c: The implementation of the _putchar function (provided by the project).
101-main.c: A sample main function to test the print_number function.
101-print_number.c: The implementation of the print_number function.
main.h: Header file containing function prototypes.
Task 10: Add one line to the code
Description:
In this task, we need to add one line to an existing code snippet to print a specific element of an array. The line should be added at a specific position in the code, and it should print the value of the array element at index 2 (a[2]) as 98.

File Modified:
102-magic.c: The existing code snippet where the line needs to be added.
