#include"main.h"
/**
 * _strncpy - copy n of a string
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: amount
 * Return: result
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
