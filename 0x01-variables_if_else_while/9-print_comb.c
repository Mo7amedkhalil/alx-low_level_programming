#include <stdio.h>

/**
  * main - program prints all possible combinations of single-digit numbers
  *
  * Return: 0 (success)
  */

int main(void)
{
	int i = 0;

	while (i < 10 )
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
