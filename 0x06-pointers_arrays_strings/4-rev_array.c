#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: pointer to the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int j = 0, lenHalf;

	for (lenHalf = n / 2; lenHalf > 0; lenHalf--, j++)
	{
		a[n - j - 1] += a[j];
		a[j] = a[n - j - 1] - a[j];
		a[n - j - 1] = a[n - j - 1] - a[j];
	}
}
