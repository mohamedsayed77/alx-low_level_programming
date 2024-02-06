#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - a function that print the number of nodes
* @h: pointer to head
* Return: number of nodes in the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
