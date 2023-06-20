#include<stdio.h>
#include<ctype.h>
/**
 * main - input function
 * _islower - checks if input is lower
 * Return: 0
 */
int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	printf("%d", r);
	r = _islower('o');
	printf("%d", r);
	r = _islower(108);
	printf("%d", r);
	putchar('\n');
	return (0);
}

int _islower(int c)
{
	if (c <= 'a' || c >= 'z')		
		return 0;
	else
		return 1;
}
