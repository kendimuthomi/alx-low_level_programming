#include "main.h"
/**
 * _strpbrk - search a string for any set of bytes
 * @s: the string
 * @accept: the sets
 * Return: pointer to the matched byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
