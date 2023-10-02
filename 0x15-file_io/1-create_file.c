#include "main.h"

/**
 * create_file - Function name
 * @filename : var
 * @text_content : var
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);

	write_ = write(fd, text_content, sizeof(text_content) - 1);
	if (write_ == -1)
		return (-1);
	return (1);
}
