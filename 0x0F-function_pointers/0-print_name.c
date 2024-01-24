#include "function_pointers.h"

/**
* print_name - a function that print name
* @name: pointer to the string name
* @f: pointer to function that will print the name
*
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
