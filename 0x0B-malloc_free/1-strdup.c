#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string and return a new memory space.
 * @str: The input string to be duplicated.
 *
 * Return: Pointer to the duplicated string, NULL if fails.
 *
 * Description:
 *	- Check if the input string is NULL, return NULL if it is.
 *	- Find the length of the input string and allocate memory for the duplicate.
 *	- Check if memory allocation fails, return NULL if it does.
 *	- Copy the characters from the input string to the new memory space.
 *	- Add a null terminator to the end of the duplicated string.
 *	- Return the pointer to the newly duplicated string.
 *
 * Time Complexity: O(n)
 */
char *_strdup(char *str)
{
	char *duplicate;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
