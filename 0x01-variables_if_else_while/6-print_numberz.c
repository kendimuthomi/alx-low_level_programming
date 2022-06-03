#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing 0-9 using putchar
 *
 * Return: always 0
 */
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		++d;
	}
	putchar('\n');
	return (0);
}
