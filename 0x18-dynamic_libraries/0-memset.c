/**
 * _memset - replace buffer
 * @s: pointer to buffer
 * @b: second buffer
 * @n: amount of changed buffers
 * Return: temp
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (temp);
}
