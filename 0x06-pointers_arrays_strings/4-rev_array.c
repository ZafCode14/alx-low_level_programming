/**
 * reverse_array - reversing an array
 * @a: pointer to an array
 * @n: length of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n - 1)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = temp;
		n--;
		i++;
	}
}
