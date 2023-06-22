/**
 * print_triange - printing triangle
 * @c: recieved character
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int n = size;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < n - i; j++)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
