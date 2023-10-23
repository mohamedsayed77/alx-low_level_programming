#include "lists.h"

/**
 * print_listint - a function that prints all elements of the listint
 * that are the integers
 * @h: pointer to the first node in the list
 * Return: return the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
