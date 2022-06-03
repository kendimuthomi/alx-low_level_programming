#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints combination of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int j, k, l;

	for (j = '0'; j <= '9'; j++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (j < k && k < l)
				{
					putchar(j);
					putchar(k);
					putchar(l);

					if (j != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
