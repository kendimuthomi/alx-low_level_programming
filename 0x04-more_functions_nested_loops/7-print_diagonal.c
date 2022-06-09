#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	int diag, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diag = 1; diag <= n; diag++)
		{
			for (s = 1; s <= diag; s++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
