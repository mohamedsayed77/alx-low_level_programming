#include "main.h"

/**
 * print_triangle - print a triangle
 * @size : takes input from other function.
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int row, space;

	if (size <= 0)
		_putchar('\n');
	else
	{

		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= size; space++)
			{
				if ((row + space) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
