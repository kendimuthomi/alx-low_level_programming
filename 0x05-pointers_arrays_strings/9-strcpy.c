#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
