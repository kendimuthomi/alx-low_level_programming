#include "main.h"
/**
 * check_is_prime - checks if n is prime
 * @n: number
 * @ans: int
 * Return: int
 */
int check_is_prime(int n, int ans)
{
	if (ans >= n && n > 1)
		return (1);
	else if (n % ans == 0 || n <= 1)
		return (0);
	else
		return (check_is_prime(n, ans + 1));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: the number
 * Return: 1 if number is a prime number
 */
int is_prime_number(int n)
{
	return (check_is_prime(n, 2));
}
