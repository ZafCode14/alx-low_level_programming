#include "main.h"
#include <stddef.h>
/**
 * _pow - gets power of a number with a base
 * @x: number
 * @y: base
 *
 * Return: result
 */
int _pow(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of binary
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, carry = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	for (i = 0; len > 0; len--, i++)
	{
		num = _pow(2, i) * (b[len - 1] - '0');
		carry += num;
	}
	return (carry);
}
