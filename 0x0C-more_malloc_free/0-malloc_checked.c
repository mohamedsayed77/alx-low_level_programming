#include "main.h"

/**
* malloc_checked - a function that allocate memory for specified element
* @b: number of elements, and the size of elements
* Return: pointer to allocated mem , or 98 if fail
*/

void *malloc_checked(unsigned int b)
{
	void *pv;

	pv = malloc(b);

	if (pv == NULL)
		exit(98);
	return (pv);
}
