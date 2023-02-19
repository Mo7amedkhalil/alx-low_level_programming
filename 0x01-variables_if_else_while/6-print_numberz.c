#include <stdio.h>

/**
  * main - a program that prints all single digit numbers of base 10
  *
  * Return: 0 (success)
  */

int main(void)
{
	int x[10] = ("1", "2", "3", "4", "5", "6", "7", "8", "9", "10");
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
