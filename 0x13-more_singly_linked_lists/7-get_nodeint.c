#include "lists.h"


/**
 * get_nodeint_at_index  - a function that return the node at index
 * @head: pointer to the first node
 * @index: take index of node to get
 * Return: return pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
