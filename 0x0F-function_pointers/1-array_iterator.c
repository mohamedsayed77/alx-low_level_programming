#include "function_pointer.h"

/**
 * array_iterator - maps an array through a function pointer
 * @array: integer array
 * @size : the array size
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
