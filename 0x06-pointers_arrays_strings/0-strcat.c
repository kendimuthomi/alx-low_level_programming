#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int b = -1, j;

	for (j = 0; dest[j] != '\0'; j++)
		;
	do {
		b++;
		dest[j] = src[b];
		j++;
	} while (src[b] != '\0');
	return (dest);
}
