#include<stdio.h>
/**
 * main - printing sizes
 * Return: 0
 */
 
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long);
	int longLongSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of char: %d byte(s)\n", charSize);
	printf("Size of an int: %d byte(s)\n", intSize);
	printf("Size of a long int: %d byte(s)\n", longSize);
	printf("Size of a long long int: %d byte(s)\n", longLongSize);
	printf("Size of a float: %d byte(s)\n", floatSize);
	return (0);
}
