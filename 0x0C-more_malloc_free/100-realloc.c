#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *new_ptr, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = ptr;
	memory = malloc(sizeof(*new_ptr) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = memory;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *new_ptr++;

	free(ptr);
	return (memory);
	}
	return (0);
}
