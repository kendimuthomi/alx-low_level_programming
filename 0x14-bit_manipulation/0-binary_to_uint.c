#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		number = 2 * number + (b[i] - '0');
	}
	return (number);
}
