#include "main.h"
#include <ctype.h>

/**
  * _isupper - checks chars if in upper case
  * @c: the input char
  *
  * Return: 1 if upper, 0 otherwise
  */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
