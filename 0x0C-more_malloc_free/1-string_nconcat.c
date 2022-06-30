#include <stdlib.h>
#include "main.h"
/**
 * strLen - checks the length of a string
 * @s: string
 * Return: the length
 */
unsigned int strLen(char *s)
{
	unsigned int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first bytes of second string
 * Return: pointer to new memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k;
	char *memory;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < strLen(s2))
		memory = malloc(strLen(s1) + n * sizeof(char) + 1);
	else
		memory = malloc(strLen(s1) + strLen(s2) + 1);
	if (memory == 0)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		memory[j] = s1[j];
	for (k = 0; s2[k] != '\0' && k < n; j++, k++)
		memory[j] = s2[k];
	memory[j] = '\0';
	return (memory);
}
