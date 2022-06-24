#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * isCoin - function that helps to calculate number of coins
 * @j: int
 * Return: number of coins neede
 */
int isCoin(int j)
{
	int c = 0;

	while (j != 0)
	{
		if (j % 10 == 9 || j % 10 == 7)
			j -= 2;
		else if (j % 25 == 0)
			j -= 25;
		else if (j % 10 == 0)
			j -= 10;
		else if (j % 5 == 0)
			j -= 5;
		else if (j % 2 == 0)
		{
			if (j % 10 == 6)
				j -= 1;
			else
				j -= 2;
		}
		else
			j -= 1;
		c++;
	}
	return (c);
}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array
 * Return: 0 if 1 argument is passed and 1 if not
 */
int main(int argc, char *argv[])
{
	int j, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	j = atoi(argv[1]);

	if (j < 0)
		printf("0\n");
	else
	{
		coin = isCoin(j);
		printf("%d\n", coin);
	}
	return (0);
}
