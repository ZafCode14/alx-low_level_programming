#include<stdio.h>
/**
 * main - fibonacci to 98
 * Return: 0
 */
int main(void)
{
	unsigned long int current = 2;
	unsigned long int previous = 1;
	unsigned long int next;
	int i;

	printf("%ld, %ld", previous, current);
	for (i = 2; i < 98; i++)
	{
		next = current + previous;
		printf(", %ld", next);
		previous = current;
		current = next;
	}
	printf("%ld\n", previous + current);
	return (0);
}
