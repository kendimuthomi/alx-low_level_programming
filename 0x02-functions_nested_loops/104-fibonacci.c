#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c = 0;
	unsigned long int num1 = 0, num2 = 1, sum = 0;

	while (c < 98)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%lu", sum);

		if (c < 97)
			printf(", ");
		c++;
	}
	printf("\n");
	return (0);
}
