#include "main.h"

/**
 * *array_range - a function that create array of int
 * @min: the minimum number
 * @max: the max number
 * Return: return pointer to an array of int
*/

int *array_range(int min, int max)
{
	int *arr;
	int n_elements, i;

	if (min > max)
		return (NULL);

	n_elements = max - min + 1;

	arr = malloc(sizeof(int) * n_elements);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n_elements; i++)
		arr[i] = min + i;

	return (arr);
}
