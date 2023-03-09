#include "main.h"

/**
  * is_prime_number - checks if prime number
  * @n: input num
  *
  * Return: 1 if prime, 0 otherwise
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (theprime(n, n - 1));
}

/**
  * the prime - checks if prime
  * @x: the num
  * @y: iterator
  *
  * Return: the prime num
  */

int theprime(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0 && y > 0)
		return (0);
	return (theprime(x, y-1));
}
