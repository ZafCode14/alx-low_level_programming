#include<stdio.h>
/**
 * add - adding two numbers
 * @x: first number 
 * @y: second number
 * Return: 0
 */
int add(int, int);

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}

int add(int x, int y)
{
	return (x + y);
}
