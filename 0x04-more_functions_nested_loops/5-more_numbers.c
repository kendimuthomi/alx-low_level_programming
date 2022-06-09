#include "main.h"
/**
 * more_numbers - prints 0-14 10 times
 */
void more_numbers(void)
{
	char j, k;
	int l;

	for (l = 0; l <= 9; l++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar('1');
				k = j % 10;
			}
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
