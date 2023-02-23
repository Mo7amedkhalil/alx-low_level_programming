#include <stdio.h>

/**
  * main - FizzBuzz
  */
int main(void)
{
	int i, a, b;

	for (i = 0; i <= 100 ; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == 0)
			printf("Fizz ");
		else if (b == 0)
		{
			printf("Buzz");
			if (i != 100)
				printf(" ");
		}
		else if (a == 0 && b == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
