#include "main.h"
/**
 * leet - transforms a string to leet
 * @s: pointer to a string
 * Return: the new string
 */
char *leet(char *s)
{
	int j, k;
	char str1[] = "aeotl";
	char STR1[] = "AEOTL";
	char str2[] = "43071";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 5; k++)
		{
			s[j] = str2[k];
			break;
		}
	}
	return (s);
}
