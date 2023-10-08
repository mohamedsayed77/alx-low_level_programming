#include "main.h"
#include <stddef.h>

/**
 * *create_array - a function that create array
 * @c : take a string
 * @size : take a number (size of array)
 * Return: return pointer to array, NULL if size 0
 *			, NULL if array equal NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);


	array = (char *)malloc(size * sizeof(char));


	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}