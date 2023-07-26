#include "main.h"

/**
 * _strncpy - Copy a string with at most n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	/* Copy up to n bytes from source to destination */
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}

	/* Fill the remaining space with null bytes */
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
