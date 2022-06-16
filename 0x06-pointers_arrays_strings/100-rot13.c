#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: the new string
 */
char *rot13(char *str)
{
	int j, k;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; str[j] != '\0'; j++)
	{
		for (k = 0; k < 54; k++)
		{
			if (((str[j] <= 'z' && str[j] >= 'a') || (str[j] <= 'Z' && str[j] >= 'A'))
			&& str[j] == in[k])
			{
				str[j] = out[k];
				break;
			}
		}
	}
	return (str);
}
