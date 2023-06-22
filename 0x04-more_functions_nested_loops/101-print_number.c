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
		putchar('-');
		n = (unsigned int)-n;
	}
	else
		x = (unsigned int)n;
	if (x / 10 != 0)
		print_number(x / 10);
	putchar(x % 10 + '0');
}
