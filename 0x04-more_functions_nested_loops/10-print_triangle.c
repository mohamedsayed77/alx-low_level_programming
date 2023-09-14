#include "main.h"

/**
 * print_triangle - print a triangle
 * @size : takes input from other function.
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
		_putchar('\n');


	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size; space++)
			_putchar(' ');

	for (hash = 1; hash <= row; hash++)
		_putchar('#');
	_putchar('\n');
	}
}
