#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints a character argument
 * @valist: the va_list containing the argument
 */
void print_char(va_list valist)
{
	char ch = va_arg(valist, int);

	printf("%c", ch);
}

/**
 * print_int - prints an integer argument
 * @valist: the va_list containing the argument
 */
void print_int(va_list valist)
{
	int num = va_arg(valist, int);

	printf("%d", num);
}

/**
 * print_float - prints a float argument
 * @valist: the va_list containing the argument
 */
void print_float(va_list valist)
{
	float num = va_arg(valist, double);

	printf("%f", num);
}

/**
 * print_string - prints a string argument
 * @valist: the va_list containing the argument
 */
void print_string(va_list valist)
{
	char *str = va_arg(valist, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *separator = "";

	/* Array of function pointers for each type */
	void (*print_funcs[])(va_list) = {
		print_char,
		print_int,
		print_float,
		print_string
	};

	/* Array of format characters */
	char format_chars[] = "cifs";

	va_start(valist, format);

	/* Loop through the format string */
	while (format && format[i])
	{
		j = 0;

		/* Loop through the format characters */
		while (format_chars[j])
		{
			if (format[i] == format_chars[j])
			{
				printf("%s", separator);
				print_funcs[j](valist);
				separator = ", ";
			}
			j++;
		}

		i++;
	}

	va_end(valist);

	printf("\n");
}

