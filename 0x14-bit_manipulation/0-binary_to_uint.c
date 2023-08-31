#include "main.h"

/**
* binary_to_uint - Converts a binary number to unsigned int.
* @b: Pointer to a string containing a binary number.
*
* Return: The converted number, or 0 if there's an invalid character or NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int converted = 0;
if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);
converted = (converted << 1) + (*b - '0');
b++;
}

return (converted);
}
