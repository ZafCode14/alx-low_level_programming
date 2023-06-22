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
		x = n
		_putchar('-');
		x = -x;
	}
	if (n / 10)
		x = n
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
