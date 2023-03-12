#include <stdio.h>
#include <stdlib.h>

/**
  * main - function to print the program's main
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: Always 0 (success)
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
