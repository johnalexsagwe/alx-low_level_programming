#include "main.h"

/**
 * string_nconcat - Concatenates two strings with a limited number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: If memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Calculate the length needed for concatenated string */
	for (index = 0; s1[index]; index++)
		len++;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	/* Copy characters from the first string */
	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	/* Copy characters from the second string up to n bytes */
	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
