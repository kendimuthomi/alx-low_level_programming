#include "holberton.h"
#include <stdlib.h>

int str_len(char *str);
int wordCount(char *str);
char **strtow(char *str);

/**
 * str_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int str_len(char *str)
{
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * wordCount - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int wordCount(char *str)
{
	int i = 0, words = 0, length = 0;

	for (i = 0; *(str + i); i++)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += str_len(str + i);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, word, letters, letter;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = wordCount(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (word = 0; word < words; word++)
	{
		while (str[i] == ' ')
			i++;

		letters = str_len(str + i);

		strings[word] = malloc(sizeof(char) * (letters + 1));

		if (strings[word] == NULL)
		{
			for (; word >= 0; word--)
				free(strings[word]);

			free(strings);
			return (NULL);
		}

		for (letter = 0; letter < letters; letter++)
			strings[word][letter] = str[i++];

		strings[word][letter] = '\0';
	}
	strings[word] = NULL;

	return (strings);
}
