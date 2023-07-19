#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - adding two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplying two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - finding the remainder of division
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
