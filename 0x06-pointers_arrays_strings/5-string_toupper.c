#include "main.h"

/**
 * string_toupper - Convert all lowercase characters to uppercase.
 * @str: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] = str[k] - 32;
		k++;
	}
	return (str);
}
