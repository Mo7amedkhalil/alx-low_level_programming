#include "main.h"

/**
  * reverse_array - function reverses the content of an array
  * @a: input integers
  * @n: number of elements of array
  */

void reverse_array(int *a, int n)
{
	int i, y;

	for (i = 0; i < n--; i++)
	{
		y = a[i];
		a[i] = a[n];
		a[n] = y;
	}
}
