#include "main.h"


/**
  * _isupper - checks chars if in upper case
  * @c: the input char
  *
  * Return: 1 if upper, 0 otherwise
  */

int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
