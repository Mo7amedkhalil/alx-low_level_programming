#include <stdio.h>

/**
  * main -  a program that prints the alphabet in lowercase, except q and e
  *
  * Return: 0 (success)
  */

int main(void)
{
	char x[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
