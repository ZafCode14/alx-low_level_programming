/**
 * _strcmp - comparing two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-15);
		else if (*s1 > *s2)
			return (15);
		s1++;
		s2++;
	}
	return (0);
}
