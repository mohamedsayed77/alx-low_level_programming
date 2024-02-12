#include "main.h"

/**
* _strlen - a function that gets the length of the string
* @s: takes string to check
* Return: the length of the string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;

	return (i);
}


/**
* append_text_to_file - a function that appends text to a file
* @filename: takes name of the file to create
* @text_content: takes text to write
* Return: 1 if success, 0 if failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);

	close(fd);

	return (bytes == len ? 1 : -1);
}
