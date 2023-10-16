#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Number of bytes from src to be concatenated
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
		i++;

	/* Append at most n bytes from the source string to the destination string */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* Null-terminate the concatenated string */
	return (dest);
}
