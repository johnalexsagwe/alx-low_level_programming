#include "hash_tables.h"

/**
 * hash_djb2 - Hashing function that generates a hash number from a given string.
 *
 * @str: The input string to be hashed.
 * Return: The generated hash number.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
