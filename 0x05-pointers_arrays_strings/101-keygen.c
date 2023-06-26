#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 6
/**
 * main - password
 * Return: 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 6];
	int length;
	int i;

	srand(time(NULL));
	length = rand() % 10 + 1;
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 94 + 33;
	}
	for (i = PASSWORD_LENGTH; i < PASSWORD_LENGTH + length; i++)
	{
		password[i] = rand() % 10 + '0';
	}
	password[PASSWORD_LENGTH + length] = '\0';
	printf("s\n", password);
	return (0);
}
