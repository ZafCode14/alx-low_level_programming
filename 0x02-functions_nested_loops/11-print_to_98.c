#include<stdio.h>
/**
 * print_to_98 - printing natural numbers to 98
 * @x: character
 * Return: 0
 */
int print_to_98(int x)
{
	int i = x;
	if (i <= 98)
	{
		for (i = x; i < 99; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				i = -i;
			}
			if (i >= 10) 
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			} else 
			{
				_putchar(i + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = x; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar((i / 100) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			} else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			} else 
			{
				_putchar(i + '0');
			}
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	return 0;
}

