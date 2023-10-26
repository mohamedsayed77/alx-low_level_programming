#include "main.h"

/**
 * print_binary - a function that prints a number as binary string
 * @n: takes a number that will be printed
 */

void print_binary(unsigned long int n)
{

	int bit = sizeof(n) * 8;
	int printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
