#include "lists.h"


/**
 * add_nodeint_end - a function that create a node
 *		 at the end of the list
 * @head: pointer to the first node
 * @n: takes integer to initialize it to the node
 * Return: return a node at the end of the list
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
		*head = new_node;

	else
	{
		node = *head;

		while (node->next)
			node = node->next;

		node->next = new_node;
	}
	return (new_node);
}
