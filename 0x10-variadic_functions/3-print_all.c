#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_int - prints integers
 * @args: arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - prints characters
 * @args: arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_float - prints floats
 * @args: arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints strings
 * @args: arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints everything
 * @format: arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	printTypeStruct printType[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string}
	};
	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(printType[j].type)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			printType[j].printer(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
