#include "stdio.h"

/**
 * sum_them_all - a functions that sum all arguments that take
 * @n : number of arguments
 * Return: return sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
