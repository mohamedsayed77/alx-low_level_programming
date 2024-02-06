#include "lists.h"


/**
 * find_listint_loop - a function that find a loop inside a linked list
 * @head: takes linked list to search
 * Return: return the address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr;
	listint_t *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
