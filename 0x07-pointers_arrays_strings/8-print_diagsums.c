#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: 2dimensional array of int
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int j, firstSum = 0, secondSum = 0;

	for (j = 0; j < size; j++)
	{
		firstSum += a[j];
		secondSum += a[size - j - 1];
		a += size;
	}
	printf("%d, ", firstSum);
	printf("%d\n", secondSum);
}
