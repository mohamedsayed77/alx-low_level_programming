#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - a function that call itself and return the length
 *	of the string
 * @s: take a string to get its len
 * Return: return the len of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

