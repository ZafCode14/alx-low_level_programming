/**
 * helper - checks if a number is prime
 * @n: the number to check
 * @i: the current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int helper(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper(n, i + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (helper(n, 2));
}
