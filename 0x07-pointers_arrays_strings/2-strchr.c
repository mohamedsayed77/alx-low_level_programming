#include "main.h"

/**
 * *_strchr -  is used to locate the first occurrence
 *	of a specified character.
 * @s : pointer to string
 * @c : the character you want to locate
 * Return: pointr to s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

}
