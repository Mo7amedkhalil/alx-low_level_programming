#include "main.h"

/**
  * print_triangle - a function that prints a triangle
  * @size: the size of the triangle
  *
  * Return: Always 0
  */

void print_triangle(int size)
{
	int i, j, n, x;

	for (i = 1; i <= size; i++)
	{
		n = size - i;
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		for (x = 0; x < i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
