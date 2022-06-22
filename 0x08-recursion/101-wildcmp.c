#include "main.h"
/**
 * check_lastChar - checks the last character of second string
 * when the first string ends
 * @s: string
 * @j: int
 * Return: 1 or 0
 */
int check_lastChar(char *s, int j)
{
	if (s[j] == '*')
		return (check_lastChar(s, j + 1));
	else if (s[j] == '\0')
		return (1);
	return (0);
}
/**
 * check - helps check
 * @str1: first string
 * @str2: second string
 * @k: int
 * @l: int
 * @usedWild: int
 * Return: 0
 */
int check(char *str1, char *str2, int k, int l, int usedWild)
{
	if (str[k] != '\0')
	{
		if (str2[l] == '\0')
			return (0);
		else if (str[l] == '*')
		{
			if (str2[l + 1] == '*')
				return (check(str1, str2, k, l + 1, l));
			else if (str2[l + 1] == str1[k])
				return (check(str1, str2, k, l + 1, l));
			else if (str1[k + 1] != str2[l + 1])
				return (check(str1, str2, k + 1, l, l));
			else if (str1[k + 1] == str2[l + 1])
				return (check(str1, str2, k + 1, l + 1, l));
		}
		else if ((str1[k] == str2[l]) ||
				(str2[l] == '*' && str2[l + 1] == str1[k + 1]))
			return (check(str1, str2, k + 1, l + 1, usedWild));
		if (usedWild == -1)
			return (0);
		return (check(str1, str2, k, usedWild, usedWild));
	}
	if (str2[l] != '\0')
		return (check_lastChar(str2, l));
	return (1);
}
/**
 * wildcmp - compares if two strings are identical
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (check(s1, s2, 0, 0, -1));
}
