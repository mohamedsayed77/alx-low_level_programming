#include "main.h"

/**
 * _sqrt_check - checks for the square root of a number
 * @guess: the number to guess the sqrt for
 * @n: The number to find the sqrt of
 * Return: the natural square root of a number
 */


int _sqrt_check(int guess, int n)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_sqrt_check(guess + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number to find the sqrt of
 * Return: the square root of n or -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(0, n));
}
