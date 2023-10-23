#include "lists.h"


/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *		given index
 * @head: pointer to the first node in the list
 * @idx: take index to insert to a new node
 * @n: take an integer to initialize it to the node
 * Return: pointer to the new node
 */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *node;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{

		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;

	while (node)
	{

		if (i == idx - 1)
		{

			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		count++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
