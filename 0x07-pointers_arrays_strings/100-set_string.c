/**
 * set_string - set string
 * @s: pointer to pointer
 * @to: pointer to string
 */
void set_string(char **s, char *to)
{
	int len = 0;
	char *p = to;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	if (len == 0)
	{
		*s = 0;
		return;
	}
	char tmp[256];

	p = tmp;
	while (*to != '\0')
	{
		*p++ = *to++;
	}
	*p = '\0';
	*s = tmp;
}
