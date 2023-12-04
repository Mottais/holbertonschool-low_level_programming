#include "main.h"
/**
 * create_file - Create a function that creates a file.
 *
 * @filename: name of file
 * @text_content: the text to print on file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len_text;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	len_text = strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, len_text) == -1)
		return (-1);

	close(fd);

	return (1);
}
