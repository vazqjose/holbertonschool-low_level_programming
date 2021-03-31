#include "holberton.h"
#include "string.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: content for the file null terminated
 * Return: will return 1 if sucess or -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writeResult;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY | O_TRUNC);

	if (fd == -1)
		return (-1);
	else
		return (1);

	if (text_content != NULL)
	{
		writeResult = write(fd, text_content, strlen(text_content));

		if (writeResult == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
