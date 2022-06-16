#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	unsigned int div = n;

	if (n < 0)
	{
		_putchar('-');
		div = -div;
	}
	if ((div / 10) > 0)
		print_number(div / 10);
	_putchar((div % 10) + '0');
}
