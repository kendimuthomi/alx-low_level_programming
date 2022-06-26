#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	char *mem;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	size1 = strLen(s1);
	size2 = strLen(s2);
	mem = malloc((size1 + size2) * sizeof(char) + 1);
	if (mem == 0)
		return (0);
	for (j = 0; j < size1 + size2; j++)
	{
		if (j < size1)
			mem[j] = s1[j];
		els
			mem[j] = s2[j - size1];
	}
	mem[j] = '\0';
	return (mem);
}
/**
 * strLen - checks the length of a string
 * @s: the string
 * Return: int
 */
int strLen(char *s)
{
	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}
