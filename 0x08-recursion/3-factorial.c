#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that recall itself and return the factorial n
 * @n: take num to get the factorial
 * Return: return the factorial num
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}


