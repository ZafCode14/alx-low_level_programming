#include <string.h>
#include <stdlib.h>
/**
 * _strlen - string length
 * @s: pointer to string
 * Return: p - s
 */
size_t _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - a);
}
/**
 * _strcpy - string copy
 * @dest: pointer to string1
 * @src: pointer to string2
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
/**
 * set_string - set value of pointer to a character
 * @s: pointer to pointer to string
 * @to: pointer to string
 */
void set_string(char **s, char *to)
{
	size_t len = _strlen(to);

	if (len == 0)
	{
		*s = NULL;
		return;
	}
	char tmp[len + 1];

	_strcpy(tmp, to);
	*s = tmp;
}
