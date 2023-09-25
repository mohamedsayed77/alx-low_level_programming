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

	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{

		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
