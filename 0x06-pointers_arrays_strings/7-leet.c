/**
 * leet - changing letters to numbers
 * @a: pointer to string
 * Return: result
 */
char *leet(char *a)
{
	char *result = a;

	while (*a != '\0')
	{
		if (*a == 'a' || *a == 'A')
			*a = '4';
		if (*a == 'e' || *a == 'E')
			*a = '3';
		if (*a == 'o' || *a == 'O')
			*a = '0';
		if (*a == 't' || *a == 'T')
			*a = '7';
		if (*a == 'l' || *a == 'L')
			*a = '1';
		a++;
	}
	return (result);
}
