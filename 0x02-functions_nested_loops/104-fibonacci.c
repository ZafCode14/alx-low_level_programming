#include<stdio.h>
/**
 * main - fibonacci to 98
 * Return: 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, next;
	int i;

	printf("%lu, %lu, ", first, second);

	for (i = 3; i <= 98; i++)
	{
		next = first + second;
		printf("%lu, ", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
