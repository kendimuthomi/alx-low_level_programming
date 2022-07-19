#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b[i] == '\0')
		return (0);
	while ((b[i] == '0') || (b[i] == '1'))
	{
		number <<= 1;
		number += b[i] - '0';
		i++;
	}
	return (number);
}
