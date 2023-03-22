#include <stdio.h>
#include "function_pointers.h"


/**
  * array_iterator - function that executes a functio
  * given as a parameter on each element of an array
  * @array: array of input functions
  * @size: size of the array
  * @action: pointer to print
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
