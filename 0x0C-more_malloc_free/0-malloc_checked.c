#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == 0)
	{
		exit(98);
	}
	return (memory);
}
