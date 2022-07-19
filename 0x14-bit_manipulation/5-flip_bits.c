#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_xor = n ^ m, bits = 0;

	while (bit_xor > 0)
	{
		bits += (bit_xor & 1);
		bit_xor >> 1;
	}
	return (bits);
}
