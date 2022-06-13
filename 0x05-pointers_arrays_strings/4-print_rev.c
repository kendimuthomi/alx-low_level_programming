#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the pointer to the string
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	while (j--)
		_putchar(s[j]);
	_putchar('\n');
}
