#include "main.h"

/**
  * _sqrt_recursion - function returns the natural square root
  * @n: input num
  *
  * Return: the square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareRoot(n, 0));
}

/**
 * squareRoot - calculates the square root of a num
 * @x: input
 * @i: iteration parameter
 * Return: -1 if no sqrt found, and the correct result otherwise
 */

int squareRoot(int x, int i)
{
	if (i > x)
		return (-1);
	if (i * i == n)
		return (i);
	return (x, squareRoot(x, i + 1));
}
