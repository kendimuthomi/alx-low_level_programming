#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the pointer for the string
 */
void rev_string(char *s)
{
	int length, j, lenHalf;
	char tmp;

	for (length = 0; s[length] != '\0'; length++)
		;
	j = 0;
	lenHalf = length / 2;
	while (lenHalf--)
	{
		tmp = s[length - j - 1];
		s[length - j - 1] = s[j];
		s[j] = tmp;
		j++;
	}
}
