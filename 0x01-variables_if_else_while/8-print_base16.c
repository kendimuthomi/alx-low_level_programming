#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A C program that prints hexadecimals
 *
 * Return: always 0
 */
int main(void)
{
	int d = 48;

	while (d <= 120)
	{
		putchar(d);
		if (d == 57)
			d += 39;
		++d;
	}
	putchar('\n');
	return (0);
}
