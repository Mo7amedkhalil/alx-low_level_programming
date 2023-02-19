#include <stdio.h>

/**
  * main - a program that prints the alphabet in lowercase,
  and then in uppercase
  *
  * Return: 0 (success)
  */

int main(void)
{
	char A[26] = "abcdefghijklmnopqrstuvwxyz";
	char B[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar(A[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(B[j]);
	}
	putchar('\n');
	return (0);
}
