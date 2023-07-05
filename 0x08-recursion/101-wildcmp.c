/**
 * wildcmp - compares two strings using wildcard *
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);

		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
