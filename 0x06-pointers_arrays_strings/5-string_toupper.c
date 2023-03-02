#include "main.h"

/**
  * string_toupper - function changes all lowercase to uppercas
  * @x: input string
  * Return: edited string
  */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
