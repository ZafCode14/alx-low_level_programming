#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes -prints opcodes of a function
 * @start: pointer to the start of the function
 * @num_bytes: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
		printf("%02hhx ", start[i]);
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Rerurn: 0 on success, 1 if number of arguments is incorrect,
 *		2 if number of bytes is negative
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)main, num_bytes);

	return (0);
}
