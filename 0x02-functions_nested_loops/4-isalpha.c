#include "main.h"
/**
 * _isalpha - checks if a variable is an alphabet
 *
 * @c: the variable to be checked
 *
 * Return: 1 if true 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return (0);
}

