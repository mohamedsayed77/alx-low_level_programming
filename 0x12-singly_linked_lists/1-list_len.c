#include "lists.h"

/**
 * list_len - a function that determines the length of linked list
 * @h: pointer to the head
 * Return: the size of list
 */

size_t list_len(const list_t *h)
{

	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
