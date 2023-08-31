#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @n: Pointer to the number to modify
* @index: THe index of the bit to set (starting from 0).
*
* Return: 1 if it worked, or -1 if an error  occured.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 1 && index >= sizeof(*n) * 8)
return (-1);

*n |= (1 << index);

return (1);
}
