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
	char *p;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		p[i] = str[i];
	return (p);
}
