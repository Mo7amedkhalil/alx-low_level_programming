#include "main.h"

/**
  * puts_half - function that prints half of a strin
  * @str: string to be printed
  */

/**
  * _strlen - function to get length of string
  * @s: input string
  *
  * Return: string length
  */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

void puts_half(char *str)
{
	int i, n;

	if ((_strlen(str) % 2) != 0)
		n = ((_strlen(str) + 1) / 2);
	else
		n = (_strlen(str) / 2);
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
