#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int fptr_r, fptr_w, i, j, k;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fptr_r = open(argv[1], O_RDONLY);
	if (fptr_r < 0)
	{
		dprintf(STDERR_FILENO, "Error can't read from file %s\n", argv[1]);
		exit(98);
	}
	fptr_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fptr_r, buf, BUFSIZ)) > 0)
	{
		if (fptr_w < 0 || write(fptr_w, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error cannot write to %s\n", argv[2]);
			close(fptr_r);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error cannot read from %s\n", argv[1]);
		exit(98);
	}
	j = close(fptr_r);
	k = close(fptr_w);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error cannot close fptr %d\n", fptr_r);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error cannot close fptr %d\n", fptr_w);
		exit(100);
	}
	return (0);
}
