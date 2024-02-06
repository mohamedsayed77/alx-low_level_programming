#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - a function the free list
* @head: pointer to the head of the linked list
*/

void free_listint(listint_t *head)
{
	listint_t *prev = NULL;


	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}

}
