#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fptr, i, j = 0;

	if (!filename)
		return (-1);
	fptr = open(filename, O_WRONLY | O_APPEND);
	if (fptr < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fptr, text_content, j);
		if (i != j)
			return (-1);
	}
	close(fptr);
	return (1);
}
