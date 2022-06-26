#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strLen - checks the length of a string
 * @s: string
 * Return: the size
 */
int strLen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated space
 * in memory
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, j;
	char *memory;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	size1 = strLen(s1);
	size2 = strLen(s2);
	memory = malloc((size1 + size2) * sizeof(char) + 1);
	if (memory == 0)
		return (0);
	for (j = 0; j < size1 + size2; j++)
	{
		if (j < size1)
			memory[j] = s1[j];
		else
			memory[j] = s2[j - size1];
	}
	memory[j] = '\0';
	return (memory);
}
