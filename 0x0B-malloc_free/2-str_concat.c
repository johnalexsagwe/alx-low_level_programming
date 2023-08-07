#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings and return the result.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 *
 * Description:
 *	- If s1 or s2 is NULL, treat it as an empty string.
 *	- Calculate the length of the concatenated string.
 *	- Allocate memory for the concatenated string.
 *	- Copy the characters from s1 and s2 to the new memory.
 *	- Add a null terminator at the end of the concatenated string.
 *	- Return the pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;
	int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	concatenated_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concatenated_str[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		concatenated_str[i + j] = s2[j];

	concatenated_str[i + j] = '\0';

	return (concatenated_str);
}
