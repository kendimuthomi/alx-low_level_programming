#include <stdio.h>
/**
 * main- entry point
 *
 * Description: printing 0-9
 *
 * Return: always 0
 */
int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		printf("%i", d);
		++d;
	}
	printf("\n");
	return (0);
}
