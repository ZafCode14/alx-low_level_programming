/**
 * leet - changing letters to numbers
 * @a: pointer to string
 * Return: result
 */
char *leet(char *a)
{
	char* result = a;

	while (*a != '\0')
	{
		if (*a == 'a' || *a == 'A')
			*a = '4';
		else if (*a == 'e' || *a == 'E')
			*a = '3';
		else if (*a == 'o' || *a == 'O')
			*a = '0';
		else if (*a == 't' || *a == 'T')
			*a = '7';
		else if (*a == 'l' || *a == 'L')
			*a = '1';
		a++;
	}
	return (result);
}
