#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to open
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, charsRead, resultWrite;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	charsRead = read(fd, buffer, letters);
	if (charsRead == -1)
		return (0);

	resultWrite = write(STDOUT_FILENO, buffer, charsRead);
	if (resultWrite == -1)
		return (0);

	close(fd);
	free(buffer);

	return (charsRead);
}
