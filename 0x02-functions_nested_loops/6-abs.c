#include"main.h"
/**
 * _abs - only positive numbers
 * @c: recieved character
 * Return: 0
 */
int _abs(int c)
{
	if (c < 0)
		c = -c;
	return (c);
}
