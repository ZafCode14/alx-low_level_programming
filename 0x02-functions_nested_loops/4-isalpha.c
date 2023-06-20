#include "main.h"
/**
 * _isalpha - checks if input is lower
 * @c - character recieved
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')		
		return 1;
	else
		return 0;
}
