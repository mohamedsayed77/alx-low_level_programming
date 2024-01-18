#include "main.h"

/**
* _calloc - a function that allocate for array of elements
* @nmemb: the number of elements
* @size: the size of elements
*
* Return: pointer to allocated memory set to 0,NULL if fail
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *arr;

	unsigned int total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	memset(arr, 0, total_size);

	return (arr);
}
