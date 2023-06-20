#include<stdio.h>
/**
 * main - input function
 * print_last_digit - printing last digit
 * Return: 0
 */
int print_last_digit(int);

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

int print_last_digit(int c)
{
	if (c < 0)
		c = -c;
	c = c % 10;
	printf("%d", c);
	return (c);
}
