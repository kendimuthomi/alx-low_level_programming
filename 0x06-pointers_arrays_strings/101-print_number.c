#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	int div = 1, j, res;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (j = 0; n / div > 9; j++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		res = n / div;
		_putchar('0' + res);
	}
}
