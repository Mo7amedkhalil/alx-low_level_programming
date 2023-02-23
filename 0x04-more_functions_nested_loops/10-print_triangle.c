#include "main.h"

/**
  * print_triangle - function to print a triangle
  * @size: size of triangle
  *
  * Return: Always 0
  */

void print_triangle(int size)
{
	int i, j, n, x;

	for (i = 1; i <= size; i++)
	{
		n = size - i;
		for (j = n; j > 0; j--)
		{
			_putchar(' ');
		}
		for (x = 0; x < i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
