#include "main.h"

/**
 * * malloc_checked - Allocate  memory by  malloc; exit with status 98 on fail
 * @b: Size of the memory block to be allocated
 *
 * Return: Pointer to allocated memory block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);

	return (block);
}
