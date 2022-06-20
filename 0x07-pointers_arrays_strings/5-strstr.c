#nclude "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int g, h;

	for (g = 0; haystack[g] > '\0'; g++)
	{
		for (h = g; haystack[h] > '\0' && needle[h - g] > '\0'; h++)
		{
			if haystack[h] != needle[h - g]
				break;
		}
		if (needle[h - g] == '\0')
			return (haystack + g);
	}
	return (0);
}
