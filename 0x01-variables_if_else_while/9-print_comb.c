#include<stdio.h>
/*
 * main - hex itteration
 * Return: 0
 */
int main(void)
{
	char i;

	for(i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		} else
		{
			putchar('\n');
		}
	}
	return (0);
}
