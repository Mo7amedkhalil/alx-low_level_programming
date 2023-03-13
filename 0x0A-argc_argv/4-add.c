#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that adds positive numbers
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: 0 on success & 1 on error
  */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *f;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			f = argv[i];
			while (*f != 0)
			{
				if (*f < 47 || *f > 57)
				{
					printf("Error\n");
					return (1);
				}
				f++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
