#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the converted decimal to binary
 * @n: decimal
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bitStarted = 0;

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			bitStarted = 1;
		}
		else if (bitStarted)
		{
			putchar('0');
		}

		mask >>= 1;
	}

	if (!bitStarted)
		putchar('0');
}
