#include "main.h"

/**
 * _pow_recursion -  a recursion function that calculate x raised
 * to the power of y
 * @x: the base value
 * @y : the exponent value
 * Return: the result of x raised to the power of y
 * if y is negative return -1
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
