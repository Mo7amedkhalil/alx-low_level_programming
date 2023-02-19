#include <stdio.h>

/**
  * main -  a program that prints the alphabet in lowercase
  *
  * Return: 0 (success)
  */

int main(void)
{
	char x[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
