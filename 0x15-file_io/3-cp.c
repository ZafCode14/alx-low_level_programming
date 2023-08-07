#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * error_exit - Print an error message to the standard
 *				error and exit with the given code.
 * @exit_code: The exit code to use when exiting.
 * @message: The error message to print.
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
			error_exit(99, "Error: Can't write to file");
	}

	if (read_bytes == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");

	return (0);
}
