#include "main.h"

/**
  * clear_bit - fnction that sets the value of a bit to 0 at a given index
  * @n: pointer to num to be changed
  * @index: index of bit to be cleared
  *
  * Return: 1 (on success) or 0 (on failure)
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
