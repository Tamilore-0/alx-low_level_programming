#include "main.h"
#include <unistd.h>

/**
 * read_textfile - Reads the first letters of a text file.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read.
 *
 * Return: The number of letters read, or -1 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (!filename || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
		return (0);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
		return (0);

	close(file_descriptor);
	free(buffer);

	return (bytes_written);
}
