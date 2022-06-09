#include "main.h"
/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	int s = 1, m = 0, p = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / s != 0)
	{
		s *= 10;
		m++;
	}
	s = s / 10;
	while (p < m)
	{
		_putchar(n / s + '0');
		n = n - (n / s) * s;
		s = s / 10;
		m++;
	}
	if (m == 0)
		_putchar(n + '0');
}
