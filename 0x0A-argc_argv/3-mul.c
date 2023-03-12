#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - program that multiplies two numbers
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: 0 on success or 1 on error
  */

int main(int argc, char *argv)
{
	 int mul = 1;
	 int i;

	 if (argc > 2)
	 {
		 for (i = 1; i < argc; i++)
			 mul = mul * atoi(argv[i]);
		 printf("%d\n",mul);
		 return (0);
	 }
	 else
	 {
		 printf("ERROR\n");
		 return (1);
	 }
}
