#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to flip
  * to get from one number to another
  * @n: first num
  * @m: second num
  *
  * Return: Num of bits to be changed
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int x = n ^ m, y;

	for (i = 0; i >= 0; i--)
	{
		y = x >> i;
		if (y & 1)
			c++;
	}
	return (c);
}
