#include "lists.h"

/**
 * sum_dlistint - a function that sums the valuse of dlist
 * @head: pointer to the head
 * Return: sum of values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
