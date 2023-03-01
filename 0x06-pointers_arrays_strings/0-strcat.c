#include "main.h"

/**
  * _strcat - function that concatenates two strings
  * @src: source of string
  * @dest: where string is concatinated
  *
  * Return: the concatinated string
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest != '\0')
	{
		i++;
	}
	j = 0;
	while (src != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
