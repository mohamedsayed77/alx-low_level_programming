#include "lists.h"


/**
 * listint_len - a function that return the number of elements
 * @h: pointer to the first node in the list
 * Return: return number of elements
 *
 */


size_t listint_len(const listint_t *h)
{
	list_t count = 0;


	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
