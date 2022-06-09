#include <stdio.h>
#include <math.h>
/**
 * main - enrty point
 * Return: 0
 */
int main(void)
{
	unsigned int long num = 612852475143, z = (int) sqrt(num);

	while (1)
	{
		if (num % z == 0)
		{
			printf("%lu \n", num / z);
		}
		z--;
	}
	return (0);
}
