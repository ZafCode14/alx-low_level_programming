#include"main.h"
/**
 * _atoi - from character to integer
 * @s: pointer to string
 * Return: result
 */
int _atoi(char *s)
{
	int digit;
	int sign = 1;
	int result = 0;
	
	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 + digit;
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return sign * result;
}
