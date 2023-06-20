#include<stdio.h>
/**
 * times_table - printing the times table
 * Return: 0
 */
void times_table(void)
{
	int i;
	int j;
	int result;
	for (i = 0; i < 10; i++)
		{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result <= 9)
			{
				if (j != 0)
				{
					putchar(' ');
					putchar(' ');
				}
				putchar(result + '0');
			}
			else
			{
				putchar(' ');
				putchar((result / 10) + '0');
				putchar((result % 10) + '0');
			}
			if (j != 9)
			putchar(',');
		}
		putchar('\n');
	}
}
