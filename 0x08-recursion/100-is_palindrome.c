#include "main.h"
/**
 * check_lastIndex - checks the last index of a string
 * @s: pointer to the string
 * Return: an int
 */
int check_lastIndex(char *s)
{
	int i = 0;

	if (*s > '\0')
		i += check_lastIndex(s + 1) + 1;
	return (i);
}
/**
 * check_palindrome - checks for a palindrome
 * @s: string
 * @st: int from right to left
 * @e: int from left to right
 * @p: int
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(char *s, int st, int e, int p)
{
	if ((st == e && p != 0) || (st == e + 1 && p == 0))
		return (1);
	else if (s[st] != s[e])
		return (0);
	else
		return (check_palindrome(s, st + 1, e - 1, p));
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int stringEnd = check_lastIndex(s);

	return (check_palindrome(s, 0, stringEnd - 1, stringEnd % 2));
}
