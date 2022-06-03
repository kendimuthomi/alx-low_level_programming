#include <stdio.h>
/**
 * main- entry point
 *
 * Description: Print a-z with the exception of q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
			++alp;
		putchar(alp);
		++alp;
	}
	putchar('\n');
	return (0);
}

