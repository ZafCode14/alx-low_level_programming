/**
 * add - adds integers
 * @a: interger a
 * @b: interger b
 *
 * Return: the sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subracts integers
 * @a: integer a
 * @b: integer b
 *
 * Return: subtracts a from b
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply integers
 * @a: integer a
 * @b: integer b
 *
 * Return: multiply a and b
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides integers
 * @a: integer a
 * @b: integer b
 *
 * Return: a devided by b
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - findes the mod
 * @a: integer a
 * @b: integer b
 *
 * Return: a mod b
 */
int mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
