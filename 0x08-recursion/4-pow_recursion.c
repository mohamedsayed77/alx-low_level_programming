#include "main.h"

/**
 * _pow_recursion - a function that recall itself and return the power
 *	of a particlure num
 * @x: The base integer
 * @y: The exponent integer
 * Return: x raised to the power of y, or -1 if y is lower than 0
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
