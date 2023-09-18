#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * rand - create a randome number
 *
 * Return: rand
 */
int rand(void)
{
	static int initialized = 0;
	if (!initialized)
	{
		initialized = 1;
		srand(time(NULL));
	}
	return (rand() % 6) + 1;
}
