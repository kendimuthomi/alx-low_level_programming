#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *hay, *ned;

	while (*haystack != '\0')
	{
		hay = haystack;
		ned = needle;
		while (*ned != '\0' && *haystack == *ned)
		{
			haystack++;
			ned++;
		}
		if (!*ned)
			return (hay);
		haystack++;
	}
	return ('\0');
}
