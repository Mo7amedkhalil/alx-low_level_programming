#include "main.h"

/**
  * _memcpy - function that copies memory are
  * @src: source
  * @dest: destination
  * @n: number of bytes
  *
  * Return: copied bytes to destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
