#include "main.h"

/**
  * print_rev - function that prints a string, in revers
  * @s: string to be printed
  */

void print_rev(char *s)
{
	int x = 0;
	int i;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	for (i = x; x > 0; x--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
