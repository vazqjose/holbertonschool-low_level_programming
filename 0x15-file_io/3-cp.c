#include "holberton.h"
#include "string.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: content for the file null terminated
 * Return: will return 1 if sucess or -1 if fails
 */

int main(const char file_from, const char file_to)
{
	int fd1, fd2, readResult, writeResult;
	char buf[1024];

	fd1 = open(file_from, O_CREAT, O_RDONLY);
	if (fd1 == -1)
	{
		printf("Error: Can't read from file %i\n", file_from);
		exit(98);
	}

	readResult = read(fd1, buf, strlen(buf));
	if (readResult == -1)
		exit(98);

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 640);
	if (fd2 == -1)
	{
		printf("Error: Can't write to %i\n", file_to);
		exit(99);
	}
	writeResult = write(fd2, buf, readResult);
	if (writeResult == -1)
	{
		printf("Error: Can't write to %i\n", file_to);
		exit(99);
	}

	if (close(fd1) == -1)
	{
		printf("Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	
	if (close(fd2) == -1)
	{
		printf("Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
