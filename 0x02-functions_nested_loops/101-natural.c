#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all natural numbers below 1024
 *
 * Return: 0 for success
 */
int main(void)
{
	int ans, d;

	for (d = 0; d < 1024; d++)
	{
		if (d % 3 == 0 || d % 5 == 0)
			ans += d;
	}
	printf("%d\n", ans);
	return (0);
}
