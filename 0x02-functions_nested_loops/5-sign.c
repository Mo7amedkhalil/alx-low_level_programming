#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: input num
  *
  * Return: 1 if >=0, else 
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
