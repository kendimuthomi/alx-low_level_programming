#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
/**
 * _atoi - converts a string to an integer
 * @s: the pointer of the string
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int m = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			m *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * m);
}
/**
 * print_int - prints an integer
 * @n: the integer
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, j, ans;

	for (j = 0; n / divisor > 9; j++, divisor *= 10)
	;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		ans = n / divisor;
		_putchar('0' + ans);
	}
}
/**
 * main - multiplies two positive numbers
 * @argc: int
 * @argv: array
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
