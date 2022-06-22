#include "main.h"
/**
 * _pow_recursion - return othe value of x raised to
 * the power of y
 * @x: first number
 * @y: second number
 * Return: -1 if y is lower than x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
