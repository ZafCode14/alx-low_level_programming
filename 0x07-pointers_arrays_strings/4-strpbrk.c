/**
 * _strpbrk - searches for a set of bytes
 * @s: pointer to string
 * @accept: pointer to string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
				return (s);
		}
		s++;
	}
	return (0);
}
