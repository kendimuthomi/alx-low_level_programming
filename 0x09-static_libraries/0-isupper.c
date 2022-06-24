#include "main.h"
/**
 * _isupper - checks if an alphabet is uppercase
 * @c: the variable to be checked
 * Return: 1 if true 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
