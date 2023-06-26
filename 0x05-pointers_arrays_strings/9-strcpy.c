#include"main.h"
/**
 * _strcpy - copy string
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
