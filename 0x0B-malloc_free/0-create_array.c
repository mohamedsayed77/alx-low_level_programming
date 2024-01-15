#include "main.h

/**
* create_array - a function that create array of char
* @c: the character to store it in the array
* @size: the size of the array
* Return: pointer to array or NULL if fail
*/


char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return ('\0');

	char *cc = malloc(sizeof(char) * size);

	if (cc == '\0')
		return ('\0');

	*cc = c;
	return (cc);
}
