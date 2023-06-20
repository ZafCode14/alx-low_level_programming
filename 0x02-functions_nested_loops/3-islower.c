#include "main.h"
/**
 * _islower - checks if input is lower
 * @c: the character to check
 * Return: 0
 */
int _islower(int c)
{
	if (c <= 'a' || c >= 'z')
		return (0);
	else
		return (1);
}
