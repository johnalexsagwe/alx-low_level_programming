#include "main.h"

/**
 * _strcmp - Compare string values.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Difference between s1[a] and s2[a].
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
