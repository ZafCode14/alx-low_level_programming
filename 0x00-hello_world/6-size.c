#include<stdio.h>
/*
 * main - printing the sizes of variable types 
 * Return: 0
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long);
	int longLongSize = sizeof(long long int);
	int floatSize = sizeof(float);
	printf("Size of char: %d\n", charSize);
	printf("Size of an int: %d\n", intSize);
	printf("Size of a long int: %d\n", longSize);
	printf("Size of a long long int: %d\n", longLongSize);
	printf("Size of a float: %d\n", floatSize);
	return (0);
}
