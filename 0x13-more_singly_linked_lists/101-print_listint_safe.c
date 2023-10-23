#include "lists.h"


/**
 * _r - a function that reallocates memory for an array of pointers
 * @list: takes the old list to append
 * @size: take the size of the new list
 * @new: the new node to add to the list
 * Return: pointer to the new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{

	const listint_t **newlist;
	size_t count;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{

		free(list);
		exit(98);
	}

	for (count = 0; count < size - 1; count++)
		newlist[count] = list[count];

	newlist[count] = new;
	free(list);
	return (newlist);
}


/**
 * print_listint_safe - a function that prints a listint_t lindked list
 * @head: pointer to the first node
 * Return: return the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	size_t num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{

		for (count = 0; count < num; count++)
		{

			if (head == list[count])
			{

				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
