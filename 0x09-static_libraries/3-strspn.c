/**
 * _strspn - length of substring
 * @s: pointer to first string
 * @accept: pointer to second string
 * Return: len
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (len);
	}
	return (len);
}
