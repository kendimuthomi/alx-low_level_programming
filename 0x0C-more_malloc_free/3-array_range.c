#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: size of the array
 * @max: char
 * Return: pointer to the newly created array or NULL
 */
int *array_range(int min, int max)
{
	int *memory, j;

	if (min > max)
		return (NULL);
	memory = malloc((max - min + 1) * sizeof(int));
	if (memory == 0)
		return (NULL);
	for (j = 0; min + j <= max; j++)
		memory[j] = min + j;
	return (memory);
}
