#include "main.h"

/**
* _realloc - a function that Reallocates a memory block using
* malloc and free
* @ptr: Pointer to the memory previously allocated with malloc
* @old_size: The size of the allocated space for ptr
* @new_size: The new size of the new memory block
*
* Return: Pointer to the newly allocated memory block,
* or NULL if reallocation fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;
	char *prev_ptr = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);


	for (i = 0; i < old_size && i < new_size; i++)
		((char *)new_ptr)[i] = prev_ptr[i];

	free(ptr);

	return (new_ptr);
}
