#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to open
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	
	close (fd);
	return (0);
}
