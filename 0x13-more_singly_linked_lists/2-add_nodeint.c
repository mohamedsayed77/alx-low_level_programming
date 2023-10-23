#include "lists.h"

/**
 * add_nodeint - a function that make a node at the beginning
 *			of the list
 * @head: pointer to the first node in the list
 * @n: takes a number to initialize it to the node
 * Return: return a node at the beginning of the list
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head)
		new_node->next = *head;

	*head = new_node;
	return (new_node);
}
