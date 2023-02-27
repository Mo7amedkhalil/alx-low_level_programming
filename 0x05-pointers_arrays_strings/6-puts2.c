#include "main.h"

/**
  * puts2 - function that prints every other character of a strin
  * @str: input string
  */

void puts2(char *str)
{
	int l = 0;
	int x = 0;
	char *c = str;
	int i;

	while (*c != '\0')
	{
		c++;
		l++;
	}
	x = l - 1;
	for (i = 0 ; i <= x ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
