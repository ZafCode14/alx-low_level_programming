#include"main.h"
/**
 * _isupper - checking for a uppercase letter
 * @c: character
 * Return: 1 || 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
