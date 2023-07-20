#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct format_t - A struct that maps format characters to print functions
 * @format: the format character
 * @printer: a function pointer to the corresponding print function
 **/
typedef struct format_t
{
	char format;
	void (*printer)(va_list arg);
} format_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
