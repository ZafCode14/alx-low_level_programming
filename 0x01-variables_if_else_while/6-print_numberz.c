#include<stdio.h>
/**
 * main - itterating from 0 to 9 with char
 * Return: 0
 */
int main(void)
{
	char i;

	for(i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
