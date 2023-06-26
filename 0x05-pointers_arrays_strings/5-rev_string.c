#include"main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	char *end;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	end = &*(s + len);

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
