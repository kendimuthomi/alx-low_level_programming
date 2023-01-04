#include "search_algos.h"
/**
 * linear_search - using linear search algorithm
 * Description: function that searches for a value
 *  in an array of integers using the Linear search algorithm
 *  Return: value or -1 if value not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (value);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
