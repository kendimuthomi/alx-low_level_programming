#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: fibonacci numbers below 4,000,000
 *
 * Return: always 0
 */
int main(void)
{
	int c = 0, d = 1, sum;
	int total = 0;

	while (total < 4000000)
	{
		sum = c + d;
		c = d;
		d = sum;
		if (sum % 2 == 0)
			total += sum;
	}
	printf("%i\n", total);
	return (0);
}
