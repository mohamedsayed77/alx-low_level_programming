#include "main.h"

/**
 * _isdigit - a program that checks for digit 0 through 9.
 * @c: input.
 * Return: 1 is digit, 0 not digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
