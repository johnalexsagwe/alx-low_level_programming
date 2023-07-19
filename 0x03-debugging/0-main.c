#include "main.h"

/**
* main - Test function for positive or negative
* Return: 0
*/
int main(void)
{
  int i;

  i = 0;
  positive_or_negative(i);
  return (0);
}

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
