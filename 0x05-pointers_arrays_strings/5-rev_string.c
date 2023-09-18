#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: take address of a string array
 *
 *
*/

void rev_string(char *s)
{

	int start, end;
	char tmp;

	for (start = 0, end = 0; s[end] != '\0'; ++end)
		;

	for (start = 0; start < end / 2; start++)
	{
		tmp = s[start];
		s[start] = s[end - 1 - start];
		s[end - 1 - start] = tmp;
	}
}
