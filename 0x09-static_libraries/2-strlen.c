#include "main.h"
/**
 * _strlen - checks the length of a string
 * @s: pointer to the string to be checked
 * Return: the string
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k])
		k++;
	return (k);
}
