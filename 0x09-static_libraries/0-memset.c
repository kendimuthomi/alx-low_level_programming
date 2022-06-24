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
	char *memory = s, value = b;

	for (j = 0; j < n; j++)
		memory[j] = value;
	return (memory);
}
