#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint - a function that prints a linked list
* @h: pointer to the head
* Return: return the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
