#include <stdio.h>

/**
  * main -  a program that prints Hexadecimal numbers in lowercase
  *
  * Return: 0 (success)
  */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i % 10 + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
