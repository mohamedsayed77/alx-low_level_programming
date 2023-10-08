#include "main.h"

/**
 * *_calloc - a function that allocates memory for array
 * @nmemb : number of elements
 * @size: size of every element
 * Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	unsigned int total_size = nmemb * size;


	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(total_size);

	if (str == NULL)
		return (NULL);

	memset(str, 0, total_size);

	return (str);
}
