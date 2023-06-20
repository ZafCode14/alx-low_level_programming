#include "main.h"
/**
 * print_last_digit - printing last digit
 * @c: recieved character
 * Return: 0
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = -c;
	c = c % 10;
	printf("%d", c);
	return (c);
}
