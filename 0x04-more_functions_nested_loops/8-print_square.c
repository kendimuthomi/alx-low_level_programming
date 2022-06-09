#include "main.h"
/**
 * print_square - prints a square
 * @size: the size f the square
 */
void print_square(int size)
{
	int r = 0, c;

	while (r < n && n > 0)
	{
		c = 0;
		while (c < n)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		r++;
	}
	if (r == 0)
		_putchar('\n');
}
