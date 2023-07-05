int helper(char *s, int i, int j);
int _strlen(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	return (helper(s, 0, len - 1));
}
/**
 * helper - checks if a string is a palindrome
 * @s: the string to check
 * @i: the start index
 * @j: the end index
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (helper(s, i + 1, j - 1));
}
/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}
