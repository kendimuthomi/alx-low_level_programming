#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 * Description: printing the alphabet
 *
 * Return: 0 for success
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
	return (0);
}
