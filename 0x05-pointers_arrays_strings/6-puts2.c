#include "main.h"

/**
  * puts2 - function that prints every other character of a strin
  * @str: input string
  */

void puts2(char *str)
{
	str = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str =str + 2;
	}
}
