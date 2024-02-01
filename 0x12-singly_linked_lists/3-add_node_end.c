#include "lists.h"


/**
* add_node_end - a function that adds a new node
* at the end of a list_t list
* @head: double pointer to the head of the list
* @str: string to be duplicated and added to the new node
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(size_t));
	list_t *node = *head;

	if (!head || !new_node)
		return (NULL);

	if (str)
	{

		new_node->str = strdup(str);

		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
	}
	if (node)
	{

		while (node->next)
			node = node->next;

		node->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}
