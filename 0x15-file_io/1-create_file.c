#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: text to be written in the file
 * Return: 1 if successful, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fptr, i, j = 0;

	if (!filename)
		return (-1);
	fptr = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	if (fptr < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fptr, text_content, j);
		if (i != y)
			return (-1);
	}
	close(fptr);
	return (1);
}
