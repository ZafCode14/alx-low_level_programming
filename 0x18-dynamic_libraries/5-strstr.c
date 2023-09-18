/**
 * _strstr - locate a substring
 * @haystack: - pointer to string 1
 * @needle: - pointer to string 2
 * Return: p1
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	if (*needle == '\0')
		return (haystack);
	for (p1 = haystack; *p1 != '\0'; p1++)
	{
		p2 = p1;
		p3 = needle;
		while (*p2 == *p3 && *p2 != '\0' && *p3 != '\0')
		{
			p2++;
			p3++;
		}
		if (*p3 == '\0')
			return (p1);
	}
	return (0);
}

