#include"main.h"
/**
 * print_square - printing square
 * @size: recieved character
 * Return: nothing
 */
void print_square(int size)
{
	int i;
	int j;
	int n;
	n = size;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
