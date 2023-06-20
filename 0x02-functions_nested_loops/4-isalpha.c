#include<stdio.h>
#include<ctype.h>
/**
 * main - input function
 * _islower - checks if input is lower
 * Return: 0
 */
int _isalpha(int c);

int main(void)
{
	int r;

	r = _isalpha('H');
	printf("%d", r);
	r = _isalpha('o');
	printf("%d", r);
	r = _isalpha(108);
	printf("%d", r);
	r = _isalpha(';');
	printf("%d", r);
	putchar('\n');
	return (0);
}

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')		
		return 1;
	else
		return 0;
}

