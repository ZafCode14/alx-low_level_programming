#include "main.h"
/**
 * print_alphabet_x10 - printing alpha function x10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 0;

		while (i < 26)
		{
			_putchar(i + 'a');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
