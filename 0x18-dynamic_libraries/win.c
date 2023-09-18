#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * rand - create a random number between 1 and 6
 *
 * Return: random number between 1 and 6
 */
int rand(void)
{
	static int initialized = 0;
	if (!initialized)
	{
		initialized = 1;
		srand(time(NULL));
	}
	return ((rand() % 6) + 1);
}
