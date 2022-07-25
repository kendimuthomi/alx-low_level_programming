#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: the file to be read
 * @letters: the number of letters to be printed to stdout
 * Return: number of letters printed, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fptr, i, j;
	char *buf;

	if (!filename)
		return (0);
	fptr = open(filename, O_RDONLY);
	if (fptr < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fptr, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fptr);
	j = write(STDOUT_FILENO, buf, i);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (j);
}
