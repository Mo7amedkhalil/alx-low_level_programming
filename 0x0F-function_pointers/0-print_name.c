#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - function that prints name
  * @name: input string
  * @f: pointer to function
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
