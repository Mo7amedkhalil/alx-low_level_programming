#include "main.h"

/**
  * _isupper - checks chars if in upper case
  * @c: the input char
  *
  * Return: 1 if upper, 0 otherwise
  */

int _isupper(int c)
{
	int i, j;
	j = 0;
	
	for (i = 'A'; i < 'Z'; i++)
	{
		if (i == c)
			j = 1;
	}
	if (j == 1)
		return (1);
	else
		return (0);
}
