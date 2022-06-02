#include <stdio.h>

/*
 * main is the entry point
 *
 * Description: let us check the sizes of various types using sizeof
 *
 * Return- Always 0(successful)
 */

int main(void)
{
	printf("The size of an int is: %lu byte(s)\n", sizeof(int));
	printf("The size of a char is: %lu byte(s)\n", sizeof(char));
	printf("The size of a float is: %lu byte(s)\n", sizeof(float));
	printf("The size of a double is: %lu byte(s)\n", sizeof(double));
	printf("The size of a long int is: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	return (0);
}

