#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: a pointer to the name of the file
 * @text_content: the string to add to the end of the file
 *
 * Return: If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, bytes_written;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);

	bytes_written = write(open_file, text_content, strlen(text_content));
	close(open_file);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
