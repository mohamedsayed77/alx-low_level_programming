#include "lists.h"

/**
 * get_dnodeint_at_index - a function that return node at specified index
 * @head: pointer to the head
 * @index: index of node to return
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
