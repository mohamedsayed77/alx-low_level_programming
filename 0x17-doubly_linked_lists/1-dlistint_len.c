#include "lists.h"

/**
 * dlistint_len - a function that returns the len of dlist
 * @h: pointer to the head
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
