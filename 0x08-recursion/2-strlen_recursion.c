#include "main.h"

/**
 * _strlen_recursion -  a recursion function that return a length of a string
 * @s : pointer to string
 * Return: return 0 if the string equal to null terminator
 *	, return length of the string
*/

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
