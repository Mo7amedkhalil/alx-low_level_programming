#include "main.h"

/**
  * print_alphabet - print alphabet in lower case
  */

void print_alphabet(void)
{
	char lett;
	for (lett = 'a'; lett <= 'z'; lett++)
	{
		_putchar(lett);
		_putchar('\n');
	}
}
