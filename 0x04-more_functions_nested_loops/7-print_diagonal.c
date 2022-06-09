#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	int diag = 0, s;

	while (diag < n && n > 0)
	{
		s = 0;
		while (s < diag)
		{
			_putchar(' ');
			s++;
		}
		_putchar('\\');
		_putchar('\n');
		diag++;
	}
	if (diag == 0)
		_putchar('\n');
}
