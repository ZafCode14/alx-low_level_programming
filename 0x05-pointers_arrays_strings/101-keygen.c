#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - password
 * Return: 0
 */
int main(void)
{
	int ran;
	int i;

	srand(time(NULL));
	for (i = 0; i < 2772; i += ran)
	{
		ran = (rand() % 127);
		printf("%c", ran);
	}
	printf("%c\n", (2772 - i));

	return (0);
}
