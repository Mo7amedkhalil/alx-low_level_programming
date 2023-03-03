#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: pointer of the capetalized string
 */
char *cap_string(char *str)
{
	int i, j;
	int c = 32;
	int s[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - c;
		c = 0;
		for (j = 0; j <= 12; j++)
		{
			if (str[i] == s[j])
			{
				j = 12;
				c = 32;
			}
		}
	}
	return (str);
}
