#include "main.h"
#include <stdlib.h>
/**
 * strLen - checks the length of a string
 * @s: the string
 * Return: the length
 */
int strLen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * argstostr - concatenates all the arguments
 * of the program
 * @ac: int
 * @av: arguments
 * Return: a string
 */
char *argstostr(int ac, char **av)
{
	int j, k = 0, l = 0, cmp = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++, k++)
		k += strLen(av[j]);
	str = malloc(sizeof(char) * k + 1);
	if (str == 0)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (l = 0; av[j][l] != '\0'; l++, cmp++)
			str[cmp] = av[j][l];
		str[cmp] = '\n';
		cmp++;
	}
	str[cmp] = '\0';
	return (str);
}
