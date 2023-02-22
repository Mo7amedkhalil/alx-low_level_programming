#include "main.h"

/**
  * _isalpha - program that checks characters
  * @c: input character
  *
  * Return: 1 if success , else 
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
