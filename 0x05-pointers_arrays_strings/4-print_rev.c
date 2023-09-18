#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: takes address of string array
 *
 *
*/

void print_rev(char *s)
{

	int length = 0;

	while (*s != '\0')
		length++;

	for (int i = length - 1; i >= 0; i--)
		puts(s[i]);
}
