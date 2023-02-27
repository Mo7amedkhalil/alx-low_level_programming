#include "main.h"

/**
  * print_array - function that prints n elements of an array
  * @a: Array name
  * @n: number of elements
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
