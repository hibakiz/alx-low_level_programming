#include "main.h"

/**
 * append_text_to_file - Function name
 * @filename : var
 * @text_content : var
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ava;
	ssize_t write_;
	struct stat s;

	if (filename == NULL)
		return (-1);

	ava = stat(filename, &s);
	if (ava != 0)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
		if (fd == -1)
			return (-1);

	write_ = write(fd, text_content, strlen(text_content));
	if (write_ == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
