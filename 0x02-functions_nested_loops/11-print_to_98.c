#include<stdio.h>
/**
 * print_to_98 - printing natural numbers to 98
 * @x: character
 * Return: 0
 */
int print_to_98(int x)
{
	int i;

	if (x <= 98)
	{
		for (i = x; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = x; i >= 98; i-- )
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
