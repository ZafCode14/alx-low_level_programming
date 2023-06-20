#include<stdio.h>
/**
 * main - input function
 * print_alphabet - printing alpha function
 * Return: 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		printf("%c", i + 'a');
		i++;
	}
	putchar('\n');
}
