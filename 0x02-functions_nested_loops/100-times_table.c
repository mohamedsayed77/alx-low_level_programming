#include "main.h"

/**
 * print_times_table - print time table of n.
 * @n: takes a number input.
 *
*/

void print_times_table(int n)
{
	int prod, mult, number;

	if (n <= 15 && n >= 0)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; ++mult)
			{
				_putchar(',');
				_putchar(' ');

				prod = number * mult;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
