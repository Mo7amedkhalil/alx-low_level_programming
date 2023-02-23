#include "main.h"

/**
  * _isdigit - function that checks for a digit
  * @c: input
  *
  * Return: 1 if c is a digit, 0 otherwise
  */
int _isdigit(int c)
{
	int i, j;

	j = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == c)
			j = 1;
	}
	if (j == 1)
		return (1);
	else
		return (0);
}
