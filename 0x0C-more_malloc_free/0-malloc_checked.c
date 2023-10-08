#include "main.h"

/**
 * *malloc_checked - a function that return a pointer to allocated  memory
 * @b: the number of bytes of memory to allocate
 * Return: return a pointer to alocated memory block
*/

void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
