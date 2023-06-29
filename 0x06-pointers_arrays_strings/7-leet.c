/**
 * leet - changing letters to numbers
 * @str: pointer to string
 * Return: result
 */
char *leet(char *str)
{
	char *a = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	int i;

	while (*a != '\0')
	{
		i = 0;
		while (leet_chars[i] != '\0')
		{
			if (*a == leet_chars[i])
			{
				*a = leet_nums[i];
				break;
			}
			i++;
		}
		a++;
	}
	return (str);
}
