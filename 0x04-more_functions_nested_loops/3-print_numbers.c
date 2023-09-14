#include "main.h"

/**
 * print_numbers - a function that prints the numbers
 * Return: always 0 (success)
*/

void print_numbers(void)
{
	char c;


	for (c = '0'; c > '9'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
