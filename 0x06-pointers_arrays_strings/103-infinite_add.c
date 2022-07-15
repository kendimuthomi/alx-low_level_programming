#include "main.h"
/**
 * string_add - adds two numbers
 * @n1: string containing first number
 * @n2: string containing second number
 * @r: buffer
 * @r_index: buffer index
 * Return: pointer to the result
 */
char *string_add(char *n1, char *n2, char *r, char *r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index) = (tens % 10) + '0';
		return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);
	return (r + r_index + 1);
}
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer to the result or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1 = 0, len2 = 0;

	for (i = 0; *(n1 + i); i++)
		len1++;
	for (i = 0; *(n2 + i); i++)
		len2++;
	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);
	n1 += len1 - 1;
	n2 += len2 - 1;
	*(r + size_r) = '\0';
	return (string_add(n1, n2, r, --size_r));
}
