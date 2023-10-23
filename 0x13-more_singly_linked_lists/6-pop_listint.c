#include "lists.h"


/**
 * pop_listint - a function that pop head node of the list
 * @head: pointer to the first node
 * Return: return the integer of the popped node
 */

int pop_listint(listint_t **head)
{

	listint_t *node;
	int n;


	if (!head || head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
