#include "main.h"

/**
 * factorial -  a recursive function that calculate factorial
 * of a specified num and return it
 * @n : take a number
 * Return: return -1 if the number lower than 0, -1 if equal to 0 or 1
 *	,else return the factorial num
*/

int factorial(int n)
{

	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	else
		return (n * factorial(n - 1));
}
