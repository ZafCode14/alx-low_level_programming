#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up all parameters
 * @n: number of all parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	/* initialize the argument list */
	va_start(args, n);

	/* iterate through each argument and add to sum */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	/* clean up the arument list */
	va_end(args);

	/* return the sum */
	return (sum);
}
