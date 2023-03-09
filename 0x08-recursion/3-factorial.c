#include "main.h"

/**
  * factorial - funtion returns factorial of a given num
  * @n: input num
  *
  * Return: the factorial
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
