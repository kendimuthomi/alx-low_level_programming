#include "main.h"
/**
 * find_square - find the square root
 * @n: the number
 * @square: square root
 * Return: the square root
 */
int find_square(int n, int square)
{
	if (square * square == n)
		return (square);
	else if (square * square < n)
		return (find_square(n, square + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - return the natural square
 * root of a number
 * @n: the number
 * Return: -1 if no square root else the square root
 */
int _sqrt_recursion(int n)
{
	return (find_square(n, 1));
}
