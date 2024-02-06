#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint_end - a function that add node at the end of the list
* @head: pointer to the head
* @n: initialize the node with number n
* Return: return pointer to the head of node after adding nodes to it
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));


	if (n <= 0)
	{
		free(newnode);
		return (NULL);

	}
	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (*head);
	}

	listint_t *ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = newnode;
	return (*head);
}
