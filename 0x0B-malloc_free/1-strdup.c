#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocates space in memory, which contains a
 * copy of the string givin as a parameter
 * @str: pointer to the string passed
 * Return: pointer to newly allocated space, of NULL if str = NULL
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	char *p;
	int len;
	int i, j;

	for (i = 0; str[i]; i++)
		len++;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (j = 0, i = 0; str[i]; i++, j++)
		p[j] = str[i];
	return (p);
}
