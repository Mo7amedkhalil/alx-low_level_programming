#include "main.h"

/**
  * _memset - function fills memory with a constant byte
  * @s: starting address of memory
  * @b: constant byte
  * @n: number of bytes to be pointed
  *
  * Return: the editted array
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for ( i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
