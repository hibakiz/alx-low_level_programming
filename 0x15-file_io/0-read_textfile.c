#include "main.h"

/**
 * read_textfile - Function name
 * @filename : var
 * @letters : var
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number_of_letters, write_;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	number_of_letters = read(fd, buffer, letters);
	close(fd);

	if (number_of_letters == -1)
	{
		free(buffer);
		return (0);
	}
	write_ = write(STDOUT_FILENO, buffer, number_of_letters);
	free(buffer);
	if (number_of_letters == write_)
		return (write_);
	return (0);
}
