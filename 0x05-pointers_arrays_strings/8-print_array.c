#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: pointer for the array
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int k = 0;

	for (n--; n >= 0; n--, k++)
	{
		printf("%d", a[k]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
