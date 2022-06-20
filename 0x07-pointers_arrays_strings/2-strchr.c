#include "main.h"
/**
 * _strchr - returns the pointer to the first occurence of character c
 * @s: the string to be searched
 * @c: the character to be located
 * Return: pointer to the initial occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return ('\0');
}
