#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the input string.
 * @c: The character to be located.
 *
 * Return: If the character is found, returns a pointer to the first occurrence
 *         in the string. If the character is not found, returns NULL.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	/* Loop through the string until the null terminator is encountered */
	for (; s[i] >= '\0'; i++)
	{
		/* If the character is found, return a pointer to its location */
		if (s[i] == c)
			return (&s[i]);
	}

	/* If the character is not found, return NULL */
	return (0);
}
