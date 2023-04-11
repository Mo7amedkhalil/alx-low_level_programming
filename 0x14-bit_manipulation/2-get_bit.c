#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: input
  * @index: starting from 0 of bit you want to get
  *
  * Return: index or 0
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
		return (n & 1);
}
