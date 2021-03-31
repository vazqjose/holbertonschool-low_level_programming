#include "holberton.h"
/**
 * create_file - create file with write flag or truncate
 * @filename: will the be the file to create
 * @text_content: will be the content for the file
 * Return: will return 1 if sucess or -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, _write;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	_write = write(fd, text_content, _strlen(text_content));

	if (_write == -1)
		return (-1);

	close(fd);
	return (1);
}
