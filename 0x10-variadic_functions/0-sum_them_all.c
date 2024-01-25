#include "variadic_functions.h"

/**
* sum_them_all - Sums a specified number of variable arguments
* @n: The number of variable arguments to be summed
* Return: The sum of the variable arguments
*/


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}


