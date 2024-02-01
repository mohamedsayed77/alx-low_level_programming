#include "lists.h"

/**
 * _strlen - a function that return the length of string
 * @s: string
 * Return: the length of the string
 *
 */


int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * add_node_end - a function that adds a node to the end of the list
 * @head: the address of pointer to head
 * @str: str field of node
 * Return: the size of list
 *
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
