#include <stdio.h>
#include <math.h>

/**
  * main - function to find largest prime factor
  *
  * Return: Always 0
  */

int main(void)
{
	long int a, b, i;

	a = 612852475143;
	b = -1;
	while (a % 2 == 0)
	{
		b = 2;
		a /= 2;
	}
	for (i = 3; i <= sqrt(a); i = i + 2)
	{
		while (a % i == 0)
		{
			b = i;
			a = a / i;
		}
	}
	if (a > 2)
		b = a;
	printf("%ld\n", b);
	return (0);
}

