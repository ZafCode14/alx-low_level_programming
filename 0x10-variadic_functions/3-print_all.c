#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @arg: the argument to print
 **/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an integer
 * @arg: the argument to print
 **/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: the argument to print
 **/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: the argument to print
 **/
void print_string(va_list arg)
{
char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	format_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (formats[j].format != '\0')
		{
			if (formats[j].format == format[i])
			{
				printf("%s", separator);
				formats[j].printer(args);
				separator = ", ";
				break;
			}

			j++;
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
