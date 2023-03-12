#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that prints num of arguments passed into i
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: Alwayys 0 (success)
  */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
