#include"main.h"
/**
 * print_rev - reverse a string
 * @s: - pointer to string
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len != 0)
	{
		putchar(*s);
		len--;
		s--;
	}
	putchar('\n');
}
