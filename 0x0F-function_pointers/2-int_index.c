#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array : int array
 * @size : array size
 * @cmp: compare function
 * Return: integer index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;


	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
