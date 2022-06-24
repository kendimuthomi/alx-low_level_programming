#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: the  variable to be checked
 *
 * Return: return 1 if the variable is lowercase and 0 if it isn't
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
