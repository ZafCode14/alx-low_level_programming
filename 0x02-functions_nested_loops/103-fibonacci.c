#include<stdio.h>
/**
 * main - fibonacci to 50
 * Return: 0
 */
int main(void)
{
	int current = 2;
	int previous = 1;
	int sum = 2;

	while (current <= 4000000)
	{
		int next = current + previous;

		if (next % 2 == 0)
			sum += next;
		previous = current;
		current = next;
	}
	printf("%d\n", sum);
	return (0);
}
