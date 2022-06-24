#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of command line arguments
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
