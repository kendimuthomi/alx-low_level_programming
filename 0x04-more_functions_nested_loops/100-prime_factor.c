#include <stdio.h>
/**
 * main - enrty point
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long d = 2;
	long l = 0;

	while (n != 1)
	{
		if (n % d == 0)
		{
			n = n / d;
			l = d;
		}
		d += 1;
	}
	printf("%ld\n", l);
	return (0);
}
