#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - if greater than 5 or less than 6
 * Return: 0
 */
int main(void)
{
	int n;
	int y = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	} else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n , y);
	}
	return (0);
}
