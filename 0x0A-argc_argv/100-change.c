#include <stdio.h>
#include <stdlib.h>

int minMoney(int n);

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 Success and 1 Faliure
 */
int main(int argc, char *argv[])
{
	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
		printf("%d\n", (minMoney(atoi(argv[1]))));
	return (0);
}

/**
 * minMoney - calculate the minimum number of coins
 * @n: the amount of money
 * Return: the minimum number of coins
 */
int minMoney(int n)
{
	int arr[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int y = n;
	int x;
	int counter = 0;

	while (y != 0)
	{
		x = y % arr[i];
		if (x == 0)
		{
			counter += (y / arr[i]);
			break;
		}
		if (x == y)
		{
			i++;
			continue;
		}
		counter += y / arr[i];
		y = x;
	}
	return (counter);
}
