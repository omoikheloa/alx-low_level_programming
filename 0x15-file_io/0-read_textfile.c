#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: a pointer to the name of the file
 * @letters: number of letters the function should read and print
 *
 * Return: If the function fails or filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t open_file, bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	bytes_read = read(open_file, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_read == -1 || bytes_written == -1 || open_file == -1
			|| bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);

	return (bytes_written);
}
