#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size `size` and assign character `c`.
 * @size: The size of the array.
 * @c: The character to assign to each element of the array.
 *
 * Description: This function dynamically allocates an array of characters
 *of size `size` and initializes each element with the character `c`.
 *
 * Return: pointer to the new created array or NULL if memory allocation fails.
 */
char *create_array(unsigned int size, char c)

{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
