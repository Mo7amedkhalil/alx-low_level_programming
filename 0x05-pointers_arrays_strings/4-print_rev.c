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
	s--;
	for (i = x; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
