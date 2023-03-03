#include "main.h"

/**
  * leet - a function that encodes a string into 133
  * @x: input string
  *
  * Return: edited string
  */

char *leet(char *x)
{
	int i, j;
	char y1[] = "aAeEoOtTlL";
	char y2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == y1[j])
				x[i] = y2[j];
		}
	}
	return (x);
}
