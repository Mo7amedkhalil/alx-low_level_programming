#include "main.h"

/**
  * print_last_digit - prints last digit
  * @n: input number
  *
  * Return: last digit value
  */

int print_last_digit(int n)
{
	int s;

	if (n < 0)
		n = -n;
	s = n % 10;
	_putchar(s + '0');
	return (s);
}
