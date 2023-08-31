#include "main.h"

/**
* get_endianness - Checks the endianness of a system.
*
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
  unsigned int num = 1;

  if (*((char *)&num) == 1) {
    return 1;
  } else {
    return 0;
  }
}
