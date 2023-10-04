#include “main.h”

/**
 * *create_array - a function that create array
 * @c : take a string
 * @size : take a number (size of array)
 * Return: return pointer to array, NULL if size 0
 *			, NULL if array equal NULL
*/
char *create_array(unsigned int size, char c)
{

	if (size == 0)
		return (NULL);

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	unsigned int i;

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
