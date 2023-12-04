#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of argument
 * @argv: argv[0]= cp, argv[1] name file from, argv[1] name file from
 *
 * Return: 1 on success, 98 or 99 or 100 on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes = 1024,  sd_err = STDERR_FILENO;
	char buf[1024];

	if (argc != 3)
		dprintf(sd_err, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(sd_err, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(sd_err, "Error: Can't write to %s\n", argv[2]);
		if (close(file_from) == -1)
			dprintf(sd_err, "Error: Can't close fd %d\n", file_from), exit(100);
		exit(99);
	}

	while (bytes == 1024)
	{
		bytes = read(file_from, buf, 1024);
		if (bytes == -1)
			dprintf(sd_err, "Error: Can't read from file %s\n", argv[1]), exit(98);

		/* Bytes_Written = write(file_to, buf, bytes);*/
		if (write(file_to, buf, bytes) == -1)
			dprintf(sd_err, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(file_from) == -1)
		dprintf(sd_err, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(sd_err, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
