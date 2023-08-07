#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to a new string containing concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;
		total_len++; /* Account for the newline character */
	}

	str = (char *)malloc(sizeof(char) * (total_len + 1));

	if (str != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				str[k] = av[i][j];
				k++;
			}
			str[k] = '\n';
			k++;
		}
		str[k] = '\0';
	}

	return (str);
}
