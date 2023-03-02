#include "main.h"

/**
  * _strncpy - a function that copies a string
  * @src: input string
  * @dest: destination file
  * @n: maximum num of bytes
  * Return: string at dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[0] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
