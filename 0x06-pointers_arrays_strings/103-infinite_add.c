#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * reverse - reversing a string
 * @s: pointer to string
 * Return: s
 */
char *reverse(char *s)
{
	size_t len = strlen(s);
	size_t i;

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	return (s);
}
/**
 * infinite_add - add two numbers
 * @n1: pointer to first num
 * @n2: pointer to second num
 * @r: pointer to result
 * @size_r: size of buffer
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	char *temp = malloc(sizeof(char) * (len1 + len2 + 1));
	int i, j, k, sum, carry = 0;

	for (i = len1 - 1, j = len2 - 1, k = 0;
		i >= 0 || j >= 0 || carry;
		i--, j--, k++)
	{
		sum = carry;
		sum += (i >= 0) ? n1[i] - '0' : 0;
		sum += (j >= 0) ? n2[j] - '0' : 0;
		temp[k] = sum % 10 + '0';
		carry = sum / 10;
	}


	temp[k] = '\0';

	if ((int)strlen(temp) + 1 > size_r)
		return (0);

	r = strcpy(r, temp);
	free(temp);

	return (reverse(r));
}
