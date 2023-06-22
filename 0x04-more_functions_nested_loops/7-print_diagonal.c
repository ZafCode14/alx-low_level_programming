#include"main.h"
/**
 * print_diagonal - print diagonal line
 * @n: character
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			for (j = i; j < n; j++)
			{

				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
