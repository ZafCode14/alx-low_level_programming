#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes -prints opcodes of a function
 * @a: pointer to the start of the function
 *
 * Return: void
 */
void print_opcodes(char *a)
{
	int i, num_bytes;

	num_bytes = atoi(a);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < num_bytes - 1; i++)
		printf("%02x ", *(ptr + i));
	printf("%02x\n", *(ptr + i));
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if number of arguments is incorrect,
 *		2 if number of bytes is negative
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	print_opcodes(argv[1]);

	return (0);
}
