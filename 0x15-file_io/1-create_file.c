#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 *
 * Return: 1, or -1 if function fails
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, bytes_written;

	if (filename == NULL)
		return (-1);

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (open_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(open_file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(open_file);
			return (-1);
		}

	}

	close(open_file);
	return (1);
}
