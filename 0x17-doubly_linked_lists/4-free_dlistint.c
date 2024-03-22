#include "lists.h"

/**
 * free_dlistint -  a function that free dlist
 * @head: pointer to the head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
