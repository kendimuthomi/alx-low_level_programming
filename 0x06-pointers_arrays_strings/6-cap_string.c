#include "main.h"
/**
 * cap_string - capitalizes all characters of a string
 * @str: pointer to the string
 * Return: the new string
 */
char *cap_string(char *str)
{
	char oct[] = ",\t;\n; .!?\"(){}";
	int j;
	int k;
	int l;

	for (k = 0; str[k] != '\0'; k++)
	{
		j = 0;
		if (k == 0)
			j = 1;
		else
		{
			for (l = 0; oct[l] != '\0'; l++)
			{
				if (str[k - 1] == oct[l])
				{
					j = 1;
					break;
				}
			}
		}
		if (j == 1)
		{
			if (str[k] <= 'z' && str[k] >= 'a')
				str[k] -= ('a' - 'A');
		}
	}
	return (str);
}
