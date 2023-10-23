#include "lists.h"


/**
 * reverse_listint - a function that reverses list
 * @head: pointer to the first node in the list
 * Return: pointer to the head
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *node = NULL;
	listint_t *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;

	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
