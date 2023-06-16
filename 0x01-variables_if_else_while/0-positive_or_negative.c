/*
 * File: 0-positive_or_negative.c
 * Author: Mohamed Zafarani
 * Date: June 16, 2023
 *
 * Description: This program generates a random number and checks 
 * if it is positive, negative, or zero.
 *              The result is printed to the console.
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - printing if n is posative or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
