#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: take a string
 *
 * Return: length of a characters
*/

int _strlen(char *s)
{

	int length;


	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}
