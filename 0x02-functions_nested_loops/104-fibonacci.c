#include"main.h"
#include <stdio.h>
/**
 * numLength - returns the length of string
 *
 * @n: operand number
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
	unsigned long n1 = 1, n2 = 2, sum, m = 100000000, n1o = 0, n2o = 0, sumo = 0;

	for (count = 1; count <= 98; ++count)
	{
		if (n1o > 0)
			printf("%lu", n1o);
		initial0s = numLength(m) - 1 - numLength(n1);

		while (n1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			--initial0s;
		}

		printf("%lu", n1);

		sum = (n1 + n2) % m;
		sumo = n1o + n2o + (n1 + n2) / m;
		n1 = n2;
		n1o = n2o;
		n2 = sum;
		n2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
