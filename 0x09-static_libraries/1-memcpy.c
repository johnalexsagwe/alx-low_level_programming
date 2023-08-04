#include "main.h"

/**
 * _memcpy - Copies a memory area from source to destination
 * @dest: Pointer to the memory area where data is to be copied
 * @src: Pointer to the memory area from where data is to be copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination (dest) memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
