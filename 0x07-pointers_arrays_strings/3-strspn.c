#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix to be measured
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				b++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
