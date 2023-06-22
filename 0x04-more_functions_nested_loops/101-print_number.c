#include"main.h"
/**
 * print_number - printing the number using recursion
 * @n: recieving a character
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}
	x /= 10;
	if (x != 10)
		print_number(x);
	_putchar((unsigned int) n % 10 + '0');
}
