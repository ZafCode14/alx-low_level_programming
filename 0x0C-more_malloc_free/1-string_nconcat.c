#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: amount of the second string needs to be copied
 * Return: pointer to new string or NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; i < n; i++)
		len2++;
	if (n >= len2)
		n = len2;
	pointer = malloc(sizeof(char) * (len1 + n));
	if (!pointer)
		return (NULL);
	for (i = 0; s1[i]; i++)
		pointer[i] = s1[i];
	for (j = 0; j < n; j++)
		pointer[i + j] = s2[j];
	pointer[i + j] = '\0';
	return (pointer);
}
