#include<stdio.h>
/**
* main - entry point
* Return: 0
*/
int main(void)
{
	int i, j, k, m;

	for (i = 0; i < 100; i++)
	{
		k = i / 10;
		m = i % 10;
		for (j = i + 1; j < 100; j++)
		{
			if (j == 100)
			{
				continue;
			}
			if (j % 10 == k && j / 10 == m)
			{
				continue;
			}
			putchar(k + '0');
			putchar(m + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i == 98 && j == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return 0;
}

