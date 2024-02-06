#include "lists.h"


/**
* free_listint2 - a function that frees node
* @head: pointer to the head
*/

void free_listint2(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *currnt = NULL;

	while (currnt)
	{
		prev = currnt;
		currnt = currnt->next;
		free(prev);
	}

}

