#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: fibonacci numbers below 50
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	long int num1 = 1, num2 = 2, sum;

	for (c = 0; c < 50; c++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}
