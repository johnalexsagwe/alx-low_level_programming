# 0x08. C - Recursion

## Introduction
This repository contains C programs that demonstrate the use of recursion. Recursion is a programming technique where a function calls itself to solve a problem. In these programs, we will explore different tasks that involve implementing and using recursive functions.

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- Understand what recursion is and how to implement it in C.
- Identify situations where recursion is appropriate to solve a problem.
- Know when not to use recursion and use alternative approaches.

## Author
- John Alex Sagwe

## Date
Wednesday, 2nd August

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A README.md file at the root of the folder is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- Do not use global variables.
- Each file should contain no more than 5 functions.
- You are not allowed to use the standard library functions, except for _putchar.
- Your header file `main.h` should contain the prototypes of all your functions and the `_putchar` function.
##Files to Create
Here is the list of files to be created for each task:

Task 0: 0-puts_recursion.c
Task 1: 1-print_rev_recursion.c
Task 2: 2-strlen_recursion.c
Task 3: 3-factorial.c
Task 4: 4-pow_recursion.c
Task 5: 5-sqrt_recursion.c
Task 6: 6-is_prime_number.c
Task 7: 100-is_palindrome.c
Task 8: 101-wildcmp.c
Header file: main.h
## Tasks
### Task 0: She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
Write a function `void _puts_recursion(char *s)` that prints a string, followed by a new line.

**Prototype:** `void _puts_recursion(char *s);`

### Task 1: Why is it so important to dream? Because, in my dreams we are together
Write a function `void _print_rev_recursion(char *s)` that prints a string in reverse.

**Prototype:** `void _print_rev_recursion(char *s);`

### Task 2: Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
Write a function `int _strlen_recursion(char *s)` that returns the length of a string.

**Prototype:** `int _strlen_recursion(char *s);`

### Task 3: You mustn't be afraid to dream a little bigger, darling
Write a function `int factorial(int n)` that returns the factorial of a given number.

**Prototype:** `int factorial(int n);`

### Task 4: Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function `int _pow_recursion(int x, int y)` that returns the value of x raised to the power of y.

**Prototype:** `int _pow_recursion(int x, int y);`

### Task 5: Your subconscious is looking for the dreamer
Write a function `int _sqrt_recursion(int n)` that returns the natural square root of a number.

**Prototype:** `int _sqrt_recursion(int n);`

### Task 6: Inception. Is it possible?
Write a function `int is_prime_number(int n)` that returns 1 if the input integer is a prime number, otherwise return 0.

**Prototype:** `int is_prime_number(int n);`

### Task 7: They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
**(Advanced)**
Write a function `int is_palindrome(char *s)` that returns 1 if a string is a palindrome and 0 if not.

**Prototype:** `int is_palindrome(char *s);`

### Task 8: Inception. Now, before you bother telling me it's impossible...
**(Advanced)**
Write a function `int wildcmp(char *s1, char *s2)` that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

**Prototype:** `int wildcmp(char *s1, char *s2);`

## Compilation and Testing
Each task has a corresponding main.c file for testing the implementation. You can use the provided main.c files to test your functions. To compile the programs, use the following format:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main.c> <function_file.c> -o <output_file>
```

For example, to compile Task 0, you would use:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-puts_recursion.c -o 0-puts_recursion
```

Run the executable file to test the function:

```
./0-puts_recursion
```

Make sure to compile and test all the tasks to ensure they are working as expected.

#END
