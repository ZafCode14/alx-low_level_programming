#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatonates two strings in the heap
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: pointer to the new string, or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int i;
	char *p;
	char *start;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	for (i = 0; s2[i]; i++)
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	start = p;
	for (i = 0; s1[i]; i++, p++)
		*p = s1[i];
	for (i = 0; s2[i]; i++, p++)
		*p = s2[i];
	*p = '\0';
	return (start);
}
