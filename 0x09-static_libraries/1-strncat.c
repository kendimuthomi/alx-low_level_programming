#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: bytes to be used from src
 *Return: new string
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen, j;

	for (destLen = 0; dest[destLen] != '\0'; destLen++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[destLen + j] = src[j];
	dest[destLen + j] = '\0';
	return (dest);
}
