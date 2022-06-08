#include"main.h"
#include <stdio.h>
/**
 * numLength - returns the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numLength(int n)
{
	int len = 0;

	if (!n)
		return (1);

	while (n)
	{
		n = n / 10;
		len += 1;
	}

	return (len);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *	starting with 1 and 2 followed by a new line
 *
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int count, initial0s;
	unsigned long fib1 = 1, fib2 = 2, sum, max = 100000000, fib1o = 0, fib2o = 0, sumo = 0;

	for (count = 1; count <= 98; ++count)
	{
		if (fib1o > 0)
			printf("%lu", fib1o);
		initial0s = numLength(max) - 1 - numLength(f1);

		while (fib1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			--initial0s;
		}

		printf("%lu", fib1);

		sum = (fib1 + fib2) % max;
		sumo = fib1o + fib2o + (fib1 + fib2) / max;
		fib1 = fib2;
		fib1o = fib2o;
		fib2 = sum;
		fib2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
