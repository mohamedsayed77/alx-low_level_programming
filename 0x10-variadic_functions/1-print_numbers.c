#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers separated by string ,
 * @separator : string that will be printed between numbers
 * @n : number of arguments
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = n;


	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	while (i--)
		printf("%d%s", va_arg(args, int),
		i ? (separator ? separator : "") : "\n");

	va_end(args);
}
