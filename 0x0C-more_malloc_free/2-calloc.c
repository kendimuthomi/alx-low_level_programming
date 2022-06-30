#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills n bytes to the memory pointed to by s with b
 * @s: pointer to the memory area
 * @b: char to fill the memory area
 * @n: the number of bytes to be filled
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	char *m = s, value = b;

	for (j = 0; j < n; j++)
		m[j] = value;
	return (m);
}
/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: length of array
 * @size: size of each element
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (size == 0 || nmemb == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == 0)
		return (NULL);
	_memset(memory, 0, nmemb * size);
	return (memory);
}
