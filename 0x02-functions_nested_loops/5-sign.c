#include "main.h"
/**
 * print_sign - prints +, -, 0 depending on the value
 * @n: recieved character
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar('0');
		return (0);
	} else
	{
		putchar('-');
		return (-1);
	}
}
