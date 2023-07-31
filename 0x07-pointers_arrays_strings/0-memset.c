#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area pointed to by @s
 *           with the constant byte @c.
 * @s: Pointer to the starting address of memory to be filled.
 * @c: The desired value to be set.
 * @n: Number of bytes to be changed.
 *
 * Return: A pointer to the memory area @s.
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++, n--)
	{
		s[i] = c;
	}

	return (s);
}
