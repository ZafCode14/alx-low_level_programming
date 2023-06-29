/**
 * rot13 - ratate characters 13 places
 * @str: pointer to strind
 * Return: str
 */
char *rot13(char *str)
{
	char *a = str;
	char *letters = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *rotated = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i;

	while (*a != '\0')
	{
		i = 0;
		while (letters[i] != '\0')
		{
			if (*a == letters[i])
			{
				*a = rotated[i];
				break;
			}
			i++;
		}
		a++;
	}
	return (str);
}
