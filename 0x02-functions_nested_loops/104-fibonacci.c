#include<stdio.h>
/**
 * main - fibonacci to 98
 * Return: 0
 */
int main(void)
{
	long int current = 2;
	long int previous = 1;
	int i;

	printf("%ld, %ld", previous, current);
	for (i = 2; i < 98; i++)
	{
		long int next = current + previous;

		printf(", %ld", next);
		previous = current - previous;
		current = next;
	}
	printf("\n");
	return (0);
}

