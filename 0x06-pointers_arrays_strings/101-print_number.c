#include"main.h"
/**
 * print_number - printing an integer
 * @n: integer
 */
void print_number(int n)
{
	n = (unsigned int)n;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
