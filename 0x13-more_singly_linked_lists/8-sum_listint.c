#include "lists.h"


/**
 * sum_listint - a function that returns sum of all data
 * @head: pointer to the first node in the list
 * Return: return the sum of the data
 */


int sum_listint(listint_t *head)
{

	int sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
