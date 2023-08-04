Project: alx-low_level_programming
Author: John Sagwe
Date: 4th August 2023

Task 0: A library is not a luxury but one of the necessities of life
In this task, we have created a static library called libmy.a containing various functions. The list of functions included in the library is as follows:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
If any functions are missing, empty placeholders with the correct prototype are included.

Files created for this task:

libmy.a
main.h
Task 1: Without libraries what have we? We have no past and no future
In this task, we have created a script called create_static_lib.sh that compiles all the .c files present in the current directory and creates a static library called liball.a.

Files created for this task:

liball.a
create_static_lib.sh
Quote of the Day
arduino
Copy code
"At the end of the day, my goal was to be the best hacker"
    - Kevin Mitnick
Please find the complete code in the GitHub repository under the directory 0x09-static_libraries.
