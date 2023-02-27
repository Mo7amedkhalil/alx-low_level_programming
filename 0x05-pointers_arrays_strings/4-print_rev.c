#include "main.h"

/**
  * print_rev - function that prints a string, in revers
  * @s: string to be printed
  */

void print_rev(char *s)
{
	int x = _strlen(*s);
	int i;
	
	for (i = x-1; x > 0; x++)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
