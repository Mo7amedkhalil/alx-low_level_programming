#include "main.h"

/**
 * _pow_recursion - function returns value of x raised to power
  * @n: input num
  * @y: power
  * Return: the num raised to power
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
