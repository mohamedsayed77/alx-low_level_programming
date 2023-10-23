#include "lists.h"


/**
 * free_listint - a function that free node list
 * @head: pointer to first node in the list
 */


void free_listint(listint_t *head)
{
	while (head)
	{

		node = head;
		head = head->next;
		free(node)
	}
}
