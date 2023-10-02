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
	ssize_t number_of_letters;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = fopen(filename, "r");
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	number_of_letters = fread(buffer, 1, letters, fd);
	printf("%s", buffer);

	fclose(fd);

	return (number_of_letters);
}
