#include <stdio.h>
/**
 * main - entry point
 * Description: FizzBuzz
 * Return: 0
 */
int main(void)
{
	int d = 1;

	while (d <= 100)
	{
		if (d % 3 == 0 && d % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (d % 3 == 0)
		{
			printf("Fizz");
		}
		else if (d % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", d);
		}
		if (d != 100)
		{
			printf(" ");
		}
		d++;
	}
	printf("\n");
	return (0);
}
