#include "main.h"

/**
 * _strspn - search the number of bytes in the initial
 *           segment of s which consist only of bytes from accept
 * @s: segment targeted
 * @accept: reference bytes container
 *
 * Return: returns the number of bytes in the initial
 *         segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;

	while (*s)
	{
		char *temp_accept = accept;

		while (*temp_accept)
		{
			if (*s == *temp_accept)
			{
				bytes++;
				break;
			}
			temp_accept++;
		}

		if (*temp_accept == '\0')
			break;

		s++;
	}

	return (bytes);
}
