#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers separated by string
 * @separator : string that will be printed between numbers
 * @n : number of arguments
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	var_end(args)
	printf("\n");
}
