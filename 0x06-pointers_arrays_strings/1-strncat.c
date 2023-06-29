/**
 * _strncat - concat two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: amount
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	char* result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
