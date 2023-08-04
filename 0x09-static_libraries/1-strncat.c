#include "main.h"

/**
 * _strncat - Concatenate two strings, using at most 'n' bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Number of bytes to concatenate from src.
 *
 * Return: Pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Find the length of the source string */
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	/*
	 * Concatenate at most 'n' bytes from src to dest.
	 * Ensure dest has enough space to hold the concatenated result.
	 */
	for (int i = 0; i < n && i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Null-terminate the concatenated string */
	dest[dest_len + ((n < src_len) ? n : src_len)] = '\0';

	return (dest);
}
