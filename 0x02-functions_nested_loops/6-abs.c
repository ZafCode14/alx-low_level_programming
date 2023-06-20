#include<stdio.h>
#include<ctype.h>
/**
 * main - input function
 * _abs - only positive numbers
 * Return: 0
 */
int _abs(int);

int main(void)
{
	int r;

	r = _abs(-1);
	r = _abs(0);
	r = _abs(1);
	r = _abs(-98);
	
	return (0);
}

int _abs(int c)
{
	if (c < 0)
		c = -c;
	printf("%d\n", c);
}
