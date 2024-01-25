#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers
* @separator: a separator to prints between the nums
* @n: number of variable arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
}
