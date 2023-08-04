#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_num - Check if a string contains only digits.
 * @str: The input string.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (str[count])
	{
		if (!isdigit(str[count]))
			return (0);

		count++;
	}
	return (1);
}

/**
 * main - Calculate the sum of numbers passed as arguments.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 if success, 1 if any argument contains non-digit characters.
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
