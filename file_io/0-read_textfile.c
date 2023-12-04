#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of file
 * @letters: size of text
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t count = 0;
	char c[1];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	while ((count < letters) && (read(fd, c, 1) == 1))
	{
		write(STDOUT_FILENO, c, 1);
		count++;
	}

	close(fd);

	return (count);
}
