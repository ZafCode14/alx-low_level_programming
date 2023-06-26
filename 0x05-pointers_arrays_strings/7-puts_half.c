#include"main.h"
/**
 * puts_half - print half a string
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int len = 0;
	int half;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	half = len / 2;
	for (i = half; i < len; i++)
	{
		if (len % 2 != 0)
		{
			putchar(str[i + 1]);
		}
		else
			putchar(str[i]);
	}
	putchar('\n');
}
