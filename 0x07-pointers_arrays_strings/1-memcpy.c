#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory dest
 * @src: the source buffer to copy characters from
 * @dest: a pointer to the memory area
 * @n: number of bytes to copy
 * Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	char *destination = dest;
	const char *source = src;

	for (j = 0; j < n; j++)
		destination[j] = source[j];
	return (dest);
}
