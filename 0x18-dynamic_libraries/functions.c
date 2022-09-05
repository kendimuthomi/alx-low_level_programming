#include <unistd.h>
#include "main.h"
/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    * Return: on success 1.
 *     * On error, -1 is returned and errno is set appropriately
 *      */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
/**
 *  * _isupper - checks if an alphabet is uppercase
 *   * @c: the variable to be checked
 *    * Return: 1 if true 0 if otherwise
 *     */
int _isupper(int c)
{
		if (c >= 65 && c <= 90)
					return (1);
			return (0);
}
/**
 *  * _memset - fills n bytes to the memory pointed to by s with b
 *   * @s: pointer to the memory area
 *    * @b: char to fill the memory area
 *     * @n: the number of bytes to be filled
 *      * Return: memory area
 *       */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int j;
			char *memory = s, value = b;

				for (j = 0; j < n; j++)
							memory[j] = value;
					return (memory);
}
/**
 *  * _strlen - checks the length of a string
 *   * @s: pointer to the string to be checked
 *    * Return: the string
 *     */
int _strlen(char *s)
{
		int k = 0;

			while (s[k])
						k++;
				return (k);
}
/**
 *  * _strcat - concatenates two strings
 *   * @dest: pointer to first string
 *    * @src: pointer to second string
 *     * Return: concatenated string
 *      */
char *_strcat(char *dest, char *src)
{
		int b = -1, j;

			for (j = 0; dest[j] != '\0'; j++)
						;
				do {
							b++;
									dest[j] = src[b];
											j++;
												} while (src[b] != '\0');
					return (dest);
}
/**
 *  * _isdigit - checks for numbers 0-9
 *   * @c: the variable to be checked
 *    * Return: 1 if true 0 otherwise
 *     */
int _isdigit(int c)
{
		if (c >= 48 && c <= 57)
					return (1);
			return (0);
}
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int j;
			char *destination = dest;
				const char *source = src;

					for (j = 0; j < n; j++)
								destination[j] = source[j];
						return (dest);
}
char *_strncat(char *dest, char *src, int n)
{
		int destLen, j;

			for (destLen = 0; dest[destLen] != '\0'; destLen++)
						;
				for (j = 0; j < n && src[j] != '\0'; j++)
							dest[destLen + j] = src[j];
					dest[destLen + j] = '\0';
						return (dest);
}
int _atoi(char *s)
{
		int m = 1;
			unsigned int n = 0;

				do {
							if (*s == '-')
											m *= -1;
									else if (*s >= '0' && *s <= '9')
													n = (n * 10) + (*s - '0');
											else if (n > 0)
															break;
												} while (*s++);
					return (n * m);
}
char *_strchr(char *s, char c)
{
		int j;

			for (j = 0; s[j] >= '\0'; j++)
					{
								if (s[j] == c)
												return (s + j);
									}
				return ('\0');
}
char *_strncpy(char *dest, char *src, int n)
{
		int k;

			for (k = 0; k < n && src[k] != '\0'; k++)
						dest[k] = src[k];
				for (; k < n; k++)
							dest[k] = '\0';
					return (dest);
}
int _islower(int c)
{
		if (c >= 97 && c <= 122)
					return (1);
			return (0);
}
void _puts(char *str)
{
		int j = 0;

			while (str[j])
					{
								_putchar(str[j]);
										j++;
											}
				_putchar('\n');
}
int _strcmp(char *s1, char *s2)
{
		int k;

			for (k = 0; s1[k] != '\0' || s2[k] != '\0'; k++)
					{
								if (s1[k] != s2[k])
											{
															return (s1[k] - s2[k]);
																	}
									}
				return (0);
}
unsigned int _strspn(char *s, char *accept)
{
		unsigned int b = 0;
			int j;

				while (*s)
						{
									for (j = 0; accept[j]; j++)
												{
																if (*s == accept[j])
																				{
																									b++;
																													break;
																																}
																			else if (accept[j + 1] == '\0')
																								return (b);
																					}
											s++;
												}
					return (b);
}
int _isalpha(int c)
{
		if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
					return (1);
			return (0);
}
char *_strpbrk(char *s, char *accept)
{
		int j;

			while (*s)
					{
								for (j = 0; accept[j]; j++)
											{
															if (*s == accept[j])
																				return (s);
																	}
										s++;
											}
				return ('\0');
}
char *_strstr(char *haystack, char *needle)
{
	char *hay, *ned;

		while (*haystack != '\0')
				{
							hay = haystack;
									ned = needle;
											while (*ned != '\0' && *haystack == *ned)
														{
																		haystack++;
																					ned++;
																							}
													if (!*ned)
																	return (hay);
															haystack++;
																}
			return ('\0');
}
int _abs(int n)
{
		if (n < 0)
					n = (-1) * n;
			return (n);
}
char *_strcpy(char *dest, char *src)
{
		int a = -1;

			do {
						a++;
								dest[a] = src[a];
									} while (src[a] != '\0');
				return (dest);
}
