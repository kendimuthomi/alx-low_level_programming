#include "main.h"
/**
 * print_times_table - prints the n times table
 *
 * @n: the number
 */
void print_times_table(int n)
{
	int num1, num2, prod;

	if (n <= 15 && n >= 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num1 * num2;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
