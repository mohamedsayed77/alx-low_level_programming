#include "main.h"


/**
 * _sqrt_recursion  - find natural square root
 * @n : the number for which to find the square root
 * @val: square root
 * Return: int
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
		return (square(n, 1));
}

/**
 * square - helper function to find the square root
 * @n : the number for which to find the square root
 * @val : square root
 * Return: int
*/

int square(int n, int val)
{


	if (val == n)
		return (val);

	else if (val * val < n)
		return (square(n, val + 1));

	else
		return (-1);
}
