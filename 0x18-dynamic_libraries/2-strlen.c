#include"main.h"
/**
 * _strlen - string length.
 * @s: pointer to character.
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
