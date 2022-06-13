#include "main.h"
/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	unsigned int p;

	p = n;
	if (n < 0)
	{
		_putchar(45);
		p = -n;
	}
	if (p / 10)
		print_number(p / 10);
	_putchar((p % 10) + '0');
}
