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
	int fd_sourc, fd_dest, bytes = 1024, Bytes_Written;
	char buf[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd_sourc = open(argv[1], O_RDONLY);
	if (fd_sourc == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_dest = creat(argv[2], 0664);
	if (fd_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_sourc), exit(99);
	}

	while (bytes == 1024)
	{
		bytes = read(fd_sourc, buf, 1024);
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		Bytes_Written = write(fd_dest, buf, bytes);
		if (Bytes_Written < bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(fd_sourc) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_sourc), exit(100);

	if (close(fd_dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest), exit(100);

	return (0);
}
