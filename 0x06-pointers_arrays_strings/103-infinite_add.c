#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	int len3;
	int i, j, k, sum, carry = 0;
	char temp;

	for (i = len1 - 1, j = len2 - 1, k = 0;
		i >= 0 || j >= 0 || carry;
		i--, j--, k++)
	{
		sum = carry;
		sum += (i >= 0) ? n1[i] - '0' : 0;
		sum += (j >= 0) ? n2[j] - '0' : 0;
		r[k] = sum % 10 + '0';
		carry = sum / 10;
	}

	r[k] = '\0';
	len3 = strlen(r);

	if (len3 + 1 > size_r)
		return (0);

	for (i = 0; i < len3 / 2; i++)
	{
		temp = r[i];
		r[i] = r[len3 - 1 - i];
		r[len3 - 1 - i] = temp;
	}

	return (r);
}
