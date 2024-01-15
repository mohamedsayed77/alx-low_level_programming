#include "main.h"

/**
* create_array - a function that create array of char
* @c: the character to store it in the array
* @size: the size of the array
* Return: pointer to array or NULL if fail
*/


char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;


	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
		arr[i++] = c;

	return (arr);
}
