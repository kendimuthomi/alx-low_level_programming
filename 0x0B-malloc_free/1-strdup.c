#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly located
 * space in memory which contains a copy of the
 * string given as a parameter
 * @str: pointer to a string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int j = 0, size = 0;
	char memory;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;
	memory = malloc(size * sizeof(str) + 1);
	if (memory == 0)
	{
		return (NULL);
	}
	else
	{
		for (; j < size; j++)
			memory[j] = str[j];
	}
	return (memory);
