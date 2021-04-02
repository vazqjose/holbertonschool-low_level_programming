#include "holberton.h"
#include "string.h"

/**
 * printError - prints error according to code
 * @errCode: Error code
 * @fileName: Pointer to argument list element
 * @fd: file descriptor
 * Return: nothing
 */
void printError(int errCode, char *fileName, int fd)
{
	if (errCode == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (errCode == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileName);
		exit(98);
	}
	else if (errCode == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileName);
		exit(99);
	}
	else if (errCode == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	else
		return;
}

/**
 * main - copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Pointer to strings of arguments
 * Return: 0 if sucess.  98, 99 or 100 if fail
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, readResult, writeResult;
	char *buf[1024];

	if (argc != 3)
		printError(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 664);
	if (fd2 == -1)
		printError(99, argv[2], fd2);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		printError(98, argv[1], fd1);

	while ((readResult = read(fd1, buf, 1024)) != 0)
	{
		if (readResult == -1)
			printError(98, argv[1], fd1);

		writeResult = write(fd2, buf, readResult);
		if (writeResult == -1)
			printError(99, argv[2], fd2);
	}

	if (close(fd1) == -1)
		printError(100, argv[1], fd1);

	if (close(fd2) == -1)
		printError(100, argv[2], fd2);

	return (0);
}
