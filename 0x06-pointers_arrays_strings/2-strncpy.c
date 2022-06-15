#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: length of string
 * Return: the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	for (; k < n; k++)
		dest[k] = '\0';
	return (dest);
}
