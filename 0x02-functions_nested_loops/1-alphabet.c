#include "main.h"
/**
 * print_alphabet - printing alpha function
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar(i + 'a');
		i++;
	}
	_putchar('\n');
}
