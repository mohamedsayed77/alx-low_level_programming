#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block
 * @ptr : pointer to the memory block previously
 * @old_size: the current size
 * @new_size: the new size of the memory block
 * Return: new allocated memory with the new size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *new_ptr;
	unsigned int cpy_size;

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

	cpy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, cpy_size);

	free(ptr);

return (new_ptr);
}
