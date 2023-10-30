#include "main.h"

/**
 * read_textfile - a function that reads text from a file and print it
 * @filename: it take the name of the file to read
 * @letters: number of bytes to read
 * Return: the bytes to read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[READ_BUFFER_SIZE * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, &buff[0], letters);
	bytes = write(STDOUT_FILENO, &buff[0], bytes);
	close(fd);

	return (bytes);
}
