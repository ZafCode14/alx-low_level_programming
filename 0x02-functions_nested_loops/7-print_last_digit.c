#include "main.h"
/**
 * print_last_digit - printing last digit
 * @c: recieved character
 * Return: 0
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
		c = -c;
	_putchar(c + '0');
	return (c);
}
