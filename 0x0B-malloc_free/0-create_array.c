#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * and initializes it witha specific char
 * @size: size of the array
 * @c: the specific char
 * Return: pointer to te array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *memory = malloc(size);

	if (size == 0 || memory == 0)
		return (0);
	while (size--)
		memory[size] = c;
	return (memory);
}
