#include "main.h"

/**
  * _islower - program that checks if character at lower case
  * @c: input character
  * Return: 1 if lowercase, 0 if not
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
