#include "lists.h"

/**
* list_len - a function that Counts the number of elements in
* a linked list_t list
* @h: pointer to the first node in the list
* Return: The number of elements in the list
*/


size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
