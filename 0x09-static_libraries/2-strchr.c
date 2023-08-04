#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locate the first occurrence of a character in a string.
 * @s: Pointer to the input string.
 * @c: The character to be found.
 *
 * Return: Pointer to the 1st occurrence of character 'c' in the string 's',
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	/* Loop through the string until the end or until the character is found */
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]); /* Return the address of the character if found */
	}
	return (NULL); /* Return NULL if the character is not found */
}
