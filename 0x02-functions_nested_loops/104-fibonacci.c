#include<stdio.h>
/**
 * main - fibonacci to 98
 * Return: 0
 */
int main(void)
{
	long long int current = 2;
	long long int previous = 1;
	long long int next;
	int i;

	printf("%lld, %lld", previous, current);
	for (i = 2; i < 98; i++)
	{
		next = current + previous;
		printf(", %lld", next);
		previous = current;
		current = next;
	}
	printf("%lld\n", previous + current);
	return (0);
}
