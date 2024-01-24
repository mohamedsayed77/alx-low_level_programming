#include "function_pointers.h"

/**
* array_iterator - a function that executes another function
* on each element of an array
* @array: pointer to array of integer
* @size: size of  array
* @action: pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
