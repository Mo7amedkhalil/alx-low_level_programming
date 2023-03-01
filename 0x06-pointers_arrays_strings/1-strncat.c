#include "main.h"

/**
  * _strncat - a function that concatenates two strings
  * @src: input string
  * @dest: input string
  * @n: number of bytes
  *
  * Return: concatenated string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	int i = 0;
	while (dest[i] != '\0')
		i++;
	int j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}
