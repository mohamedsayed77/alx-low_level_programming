#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n : takes input
*/

void print_diagonal(int n)
{
	int i, i2;


	if (n <= 0)
		_putchar('\n');

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (i2 = 1; i2 <= i; i2++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
