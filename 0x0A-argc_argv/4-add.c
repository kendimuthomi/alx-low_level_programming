#include <stdio.h>
#include <stdlib.h>
/**
 * check_integer - checks if str is an integer
 * @str: the string to be checked
 * Return: 0 if integer 1 if not
 */
int check_integer(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] < '0' || str[j] > '9')
			return (1);
		j++;
	}
	return (0);
}
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (check_integer(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
