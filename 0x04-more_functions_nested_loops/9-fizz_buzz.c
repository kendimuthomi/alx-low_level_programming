#include <stdio.h>
/**
 * main - entry point
 * Description: FizzBuzz
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if (d % 3 == 0)
		{
			printf("Fizz");
		}
		else if (d % 5 == 0)
		{
			printf("Buzz");
		}
		else if (d % 3 == 0 && d % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", d);
		}
		if (d != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
