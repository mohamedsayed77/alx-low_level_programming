#include "lists.h"



/**
 * delete_nodeint_at_index - a function that delete node at a given
 *	index
 * @head: pointer to the first node in the list
 * @index: take index of node to delete
 * Return: return success if 1, -1 if fail
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t int count = 0;


	if (!head || !*head)
		return (-1);

	if (!index)
	{

		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{

			prev_node->next = node->next;
			free(node);
			return (1);
		}
		count++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
