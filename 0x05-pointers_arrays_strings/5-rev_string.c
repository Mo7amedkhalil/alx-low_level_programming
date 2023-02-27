#include "main.h"

/**
  * rev_string - function that reverses a string
  * @s:input string
  */

void rev_string(char *s)
{
	char r = s[0];
	int c, i;

	c = 0;
	while (s[c] != '\0')
		c++;
	for (i = 0; i < c ; i++)
	{
		c--;
		r = s[i];
		s[i] = s[c];
		s[c] = r;
	}
}
