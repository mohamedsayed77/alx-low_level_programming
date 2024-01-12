#include "main.h"

/**
 * _isupper - a program that checks whether a character is uppercase or not._
 * @c : takes c  from other function.
 * Return: 1 is uppercase, 0 not uppercase
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
