#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * to every element of an array
 * @array: array of int
 * @size: size of array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL)
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
}
