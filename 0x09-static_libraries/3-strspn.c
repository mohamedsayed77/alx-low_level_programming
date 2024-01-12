#include "main.h"

/**
 * *_strspn - is used to determine how many characers at the beginning
 *	of a string match.
 * @s : pointer to string
 * @accept : pointer to string
 * Return: number of the matched string
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
