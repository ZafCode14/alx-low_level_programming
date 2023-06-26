#include"main.h"
/**
 * puts2 - print every other character
 * @str: pointer to string
 */
void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(*(str + len));
			len++;
		}
		else
		{
			len++;
			continue;
		}
	}
	_putchar('\n');
}

