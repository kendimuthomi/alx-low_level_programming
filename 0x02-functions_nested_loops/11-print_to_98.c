#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from any number to 98
 *
 * @n: the number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n);
			n--;
		}
	}
	_putchar('98');
	_putchar('\n');
}
