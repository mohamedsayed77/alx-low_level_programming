#include "main.h"

/**
 * *_strchr -  is used to locate the first occurrence
 *	of a specified character.
 * @s : pointer to string
 * @c : the character you want to locate
 * Return: return the location of the character if found
 *	return null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
