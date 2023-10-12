#include "variadic_functions.h"

/**
 * print_strings - a function that print strings separated
 * @separator: string separator
 * @n: number of arguments
 * Return: return void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(args);
}
