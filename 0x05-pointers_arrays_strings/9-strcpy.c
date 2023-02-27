#include "main.h"

/**
  * _strlen - function that returns the length of a string
  * @s: character pointer
  *
  * Return: l
  */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
  * _strcpy - a function that copies a strin
  * @src: source of string
  * @dest: destination of string
  *
  * Return: string to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0 ; i < _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
