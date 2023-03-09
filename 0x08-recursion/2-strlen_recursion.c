#include "main.h"

/**
  * _strlen_recursion - function returns the length of a string
  * @s: input string
  * Return: the length of string
  */

int _strlen_recursion(char *s)
{
	int l;
	
	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
