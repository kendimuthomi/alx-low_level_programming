#include <stdio.h>
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j = 0;

	while (argc--)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}
