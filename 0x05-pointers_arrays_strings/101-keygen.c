#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - password
 * Return: 0
 */
int main(void)
{
	int length = 6;
	char password[length + 6];
	int i;

	srand(time(NULL));

	for(i = 0; i < length; i++)
	{
		password[i] = (rand() % 57) + 'A';
		if (password[i] > 'Z' && password[i] < 'a')
		{
			password[i] += 6;
		}
	}
	password[length] = '\0';
	printf("%s\n", password);
	return (0);
}
