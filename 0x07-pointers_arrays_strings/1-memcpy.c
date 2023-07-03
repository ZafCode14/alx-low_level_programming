/**
 * _memcpy - change buffer memory
 * @dest: pointer to memory needed to be changed
 * @src: pointer to buffer it will be chaged to
 * @n: amaount of buffers chaged
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
