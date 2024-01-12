#include "main.h"

/**
 * *_strstr -  is used to find the first occurrence of a specified
 *	substring.
 * @haystack : pointer to string
 * @needle : pointer to string that searching for in the hatstack
 * Return: return string if found , null if not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
