#include "hash_tables.h"


/**
* key_index - Generates index key based on a given hash and hash table size.
*
* @key: The key to be indexed.
* @size: The size of the hash table.
* Return: The calculated key index.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
if (key == NULL || size == 0)
return (0);
return (hash_djb2(key) % size);
}
