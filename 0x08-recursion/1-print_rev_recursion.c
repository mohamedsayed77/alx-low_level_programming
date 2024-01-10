#include "main.h"

/**
 * _print_rev_recursion - a function that call itself and print a string
 *	in reverse
 * @s: take a string to be printed in reverse
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
