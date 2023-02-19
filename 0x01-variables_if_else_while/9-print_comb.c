#include <stdio.h>

/**
  * main - program prints all possible combinations of single-digit numbers
  *
  * Return: 0 (success)
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		return (0);
	}
}
