#include "main.h"

/**
  * print_last_digit - prints last digit
  * @n: input number
  *
  * Return: last digit value
  */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
