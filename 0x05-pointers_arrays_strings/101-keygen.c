#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - password
 * Return: 0
 */
int main(void)
{
	srand(time(NULL));
	int ran;
	int i;

	for (i = 0; i < 37; i++)
	{
		ran = (rand() % (126 - 33 + 1) + 33);
		printf("%c", ran);
	}
	printf("\n");

	return (0);
}
