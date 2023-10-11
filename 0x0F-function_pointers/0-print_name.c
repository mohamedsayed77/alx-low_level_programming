#include "function_pointers.h"

/**
 * print_name - a function that prints name
 * @name: pointer to a character array
 * @f: a function pointer that point to a function take a string 
 *
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{

	if (name && f)
		f(name);

}
