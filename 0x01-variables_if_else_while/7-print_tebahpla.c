#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing tha alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		--alp;
	}
	putchar('\n');
	return (0);
}
