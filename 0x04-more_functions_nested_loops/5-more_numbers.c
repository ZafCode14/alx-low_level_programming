#include "main.h"
/**
 * more_numbers - print 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	char numbers[20] = "01234567891011121314";

	while (j < 10)
	{
		i = 0;
		while (i < 20)
		{
			_putchar(numbers[i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
