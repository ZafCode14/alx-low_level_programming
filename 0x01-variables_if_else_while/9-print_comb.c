#include<stdio.h>
/*
 * main - hex itteration
 * Return: 0
 */
int main(void)
{
	for(char i = '0'; i <= '9'; i++)
	{
		if(i < '9')
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
