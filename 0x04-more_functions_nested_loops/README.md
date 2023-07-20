Project Name
Table of Contents
Description
Requirements
Tasks
Usage
Author
Description
This project contains a collection of C functions that perform various tasks as specified in the project requirements.

Requirements
Allowed editors: vi, vim, emacs
All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
All files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
The code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl
Global variables are not allowed
Each file should contain no more than 5 functions
The standard library is not allowed. Functions like printf, puts, etc. are forbidden, except for _putchar
The _putchar.c file should not be pushed to the repository
Tasks
isupper

Prototype: int _isupper(int c);
Returns 1 if c is an uppercase character, 0 otherwise.
isdigit

Prototype: int _isdigit(int c);
Returns 1 if c is a digit (0 through 9), 0 otherwise.
mul

Prototype: int mul(int a, int b);
Returns the product of two integers a and b.
print_numbers

Prototype: void print_numbers(void);
Prints the numbers from 0 to 9, followed by a new line.
print_most_numbers

Prototype: void print_most_numbers(void);
Prints the numbers from 0 to 9 (excluding 2 and 4), followed by a new line.
more_numbers

Prototype: void more_numbers(void);
Prints the numbers from 0 to 14 repeated 10 times, each time followed by a new line.
print_line

Prototype: void print_line(int n);
Draws a straight line in the terminal using the character _.
The number of times the character _ should be printed is determined by n.
print_diagonal

Prototype: void print_diagonal(int n);
Draws a diagonal line in the terminal using the character \.
The number of times the character \ should be printed is determined by n.
print_square

Prototype: void print_square(int size);
Prints a square in the terminal using the character #.
The size of the square is determined by size.
fizz_buzz

The classic Fizz-Buzz test.
Prints the numbers from 1 to 100, replacing multiples of 3 with "Fizz", multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz".
Each number or word is separated by a space.
print_triangle

Prototype: void print_triangle(int size);
Prints a triangle in the terminal using the character #.
The size of the triangle is determined by size.
largest_prime_factor

Advanced task.
Finds and prints the largest prime factor of the number 612852475143.
print_number

Advanced task.
Prototype: void print_number(int n);
Prints an integer n.
Usage
To compile and run the code for each task, you can use the provided gcc command in the examples. For example, to compile and run task 0:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isupper
./0-isupper
Remember to include the corresponding header file in each C file and push your header file as well.

Author
John Alex Sagwe

GitHub: johnalexsagwe
