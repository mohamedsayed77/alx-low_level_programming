#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_nodeint - a function that add node at the beginnning
* @head: pointer to the head
* @n: num
* Return: pointer to the newnode, or NULL if fail
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	if (n <= 0)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
