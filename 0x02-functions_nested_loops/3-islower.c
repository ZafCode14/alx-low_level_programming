#include "main.h"
/**
 * _islower - checks if input is lower
 * Return: 0
 */
int _islower(int c)
{
	if (c <= 'a' || c >= 'z')		
		return 0;
	else
		return 1;
}
