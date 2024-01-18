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
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	ptr = arr;

	for (i = 0; i < size * nmemb; i++)
		ptr[i] = 0;

	return (arr);
}
