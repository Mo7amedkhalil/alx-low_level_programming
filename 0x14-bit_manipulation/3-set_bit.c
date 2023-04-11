#include "main.h"

/**
  * set_bit - sets the bit at index to 1
  * @n: input num
  * @index: integer
  *
  * Return: 1 (success) or -1 (failure)
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
