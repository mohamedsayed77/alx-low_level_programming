#include "main.h"

/**
 * print_triangle - print a triangle 
 * @size : takes input from other function.
 * Return: Always 0 (success) 
*/

void print_triangle(int size)
{
	int hight, base;

	if ( size <= 0)
		_putchar('\n');

	else
	{

		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= size; base++)
			{
				if (base <= size - hight) 
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}	
			
