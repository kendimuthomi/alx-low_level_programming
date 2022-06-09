#include "main.h"
/**
 * print_line - prints a straight line
 * @n: the length of the line
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
			_putchar('_');
		_putchar('\n');
	}
}
