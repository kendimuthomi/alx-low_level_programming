#include "main.h"
/**
 * _isdigit - checks for numbers 0-9
 * @c: the variable to be checked
 * Return: 1 if true 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
