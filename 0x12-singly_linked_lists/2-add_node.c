#include "lists.h"

/**
* add_node - a function that Adds a new node at the beginning
* of a list_t list
* @head: A double pointer to the starting node of the list
* @str: The string to put in the new node. It will be duplicated
* Return: The address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;

	 new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
