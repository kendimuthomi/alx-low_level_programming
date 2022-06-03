#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: A C program that checks the value of a variable
 *
 * Return: always 0
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %i is %i and is 0\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %i is %i and is lesser then 6 and not 0\n", n, ld);
	return (0);
}
