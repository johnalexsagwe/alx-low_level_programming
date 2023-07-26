#include "main.h"

/**
 * leet - Encode into 1337speak.
 * @n: Input string.
 *
 * Description: Encodes the input string into 1337speak (leet speak),
 * replacing specific characters with their leet equivalents.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *n)
{
	char leet_map[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == leet_map[j])
			{
				n[i] = leet_replace[j];
				break;
			}
		}
	}
	return (n);
}
