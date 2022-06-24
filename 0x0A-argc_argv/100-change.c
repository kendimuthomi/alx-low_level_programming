#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
 * isCoin - function that helps to calculate number of coins
 * @j: int
 * Return: number of coins needed
 */
int isCoin(int j)
{
	int count = 0;

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

		count++;
	}

	return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int j, coin;

	coin = 0;

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
