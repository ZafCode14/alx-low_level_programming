#include"main.h"
/**
 * print_number - printing the number using recursion
 * @n: recieving a character
 */
void print_number(int n)
{
	unsigned int x = n;

	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
