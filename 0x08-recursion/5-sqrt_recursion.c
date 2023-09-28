#include "main.h"

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion  - calculates the natural square root of a num
 * @n : the number for which to find the square root
 * Return: the natural square root of n,
 *	or -1 if it does not have one
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (find_sqrt(n, n / 2));
}

/**
 * find_sqrt - helper function to find the square root
 * @n : the number for which to find the square root
 * @guess : the current guess for the square root
 * Return: return the pointer 's'
*/

int find_sqrt(int n, int guess)
{

	int square = guess * guess;

	if (square == n)
		return (guess);

	else if (square < n)
		return (find_sqrt(n, guess + 1));

	else
		return (find_sqrt(n, guess - 1));
}
