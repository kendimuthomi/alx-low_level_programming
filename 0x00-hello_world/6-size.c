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
	printf("The size of an char is: %lu byte(s)\n", sizeof(char));
	printf("The size of a int is: %lu byte(s)\n", sizeof(int));
	printf("The size of a long int is: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int is: %lu byte(s)\n", sizeof(long long int));
	printf("The size of a double is: %lu byte(s)\n", sizeof(double));
	printf("Size of a float is: %lu byte(s)\n", sizeof(float));
	return (0);
}

