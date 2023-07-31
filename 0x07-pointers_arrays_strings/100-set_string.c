#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer value to be set.
 * @to: Value pointed to by s.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
