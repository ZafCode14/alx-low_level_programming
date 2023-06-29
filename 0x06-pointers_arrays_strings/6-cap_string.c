/**
 * cap_string - capping a string
 * @a: pointer to string
 * Return: result
 */
char *cap_string(char *a)
{
	char *result = a;
	if (a && *a >= 'a' && *a <= 'z')
		*a = *a - 'a' + 'A';
	while (*a != '\0')
	{
		if ((*a == ' ' || *a == '\n' ||
		*a == '\t' || *a == ',' || *a == ';' ||
		*a == '.' || *a == '!' || *a == '?' ||
		*a == '"' || *a == '(' || *a == ')' ||
		*a == '{' || *a == '}') || a == 0 &&
		(*(a + 1) >= 'a' && *(a + 1) <= 'z'))
			*(a + 1) = *(a + 1) - 'a' + 'A';
		a++;
	}
	return (result);
}
