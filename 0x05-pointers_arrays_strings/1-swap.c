#include "main.h"
/**
 * swap_int - swaps two values
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
