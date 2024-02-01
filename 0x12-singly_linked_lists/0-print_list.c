include "lists.h"

/**
* print_list - a functions that prints a linked lists
* @h: pointer to the head
* Return: the size of list
*
*/

size_t print_list(const list_t *h)
{

	size_t i = 0;

	while (h)
	{

		printf("[%d] %s\n", strlen(h->str),
		h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
