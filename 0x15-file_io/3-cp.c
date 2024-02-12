#include "main.h"

/**
* main - a program that compies the content of a file to another file
* @ac: argument count
* @av: argument vector
* Return: 1 if success, 0 if failure
*/

int main(int ac, char **av)
{
	int fd_from = 0, fd_to = 0;
	ssize_t b;
	char buff[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(fd_from, buff, READ_BUFFER_SIZE)) > 0)
		if (write(fd_to, buff, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	fd_from = close(fd_from);
	fd_to = close(fd_to);

	if (fd_from)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd_from), exit(100);

	if (fd_to)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd_from), exit(100);

	return (EXIT_SUCCESS);
}
