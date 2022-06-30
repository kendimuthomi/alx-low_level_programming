#include <stdlib.h>
#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory dest
 * @src: the source buffer to copy characters from
 * @dest: a pointer to the memory area
 * @n: number of bytes to copy
 * Return: pointer to the destination buffer
 */
void _memcpy(void *dest, void *src, size_t n)
{
	size_t j;
	char *destination = (char *)dest;
	const char *source = (char *)src;

	for (j = 0; j < n; j++)
		destination[j] = source[j];
}
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr)
		{
			_memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
		return (new_ptr);
	}
	return (0);
}
