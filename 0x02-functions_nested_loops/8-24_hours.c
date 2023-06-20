#include "main.h"
/**
 * jack_beuer - time function
 * Return: 0
 */
void jack_bauer(void)
{
	int m1;
	int m2;
	int h1;
	int h2;

	for (h2 = 0; h2 < 3; h2++)
	{
		for (h1 = 0; h1 < 10; h1++)
		{
			for (m2 = 0; m2 < 6; m2++)
			{
				for (m1 = 0; m1 < 10; m1++)
				{
					_putchar(h2 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(m1 + '0');
					_putchar(' ');
					_putchar('\n');
				}
			}
			if (h2 == 2 && h1 ==3)
				return;
		}
	}
}

