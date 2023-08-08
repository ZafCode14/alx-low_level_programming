#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char buffer[1024];
	ssize_t len, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	len = fread(buffer, sizeof(char), letters, file);
	buffer[len] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, len);

	fclose(file);

	if (bytes_written != len)
		return (0);
	return (bytes_written);
}
