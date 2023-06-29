/**
 * string_toupper - from lower to upper
 * @a: pointer to string
 * Return: result
 */
char *string_toupper(char *a)
{
	char* result = a;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - 'a' + 'A';
	a++;
	}
	return (result);
}
