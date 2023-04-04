#include <stdio.h>
#include "lists.h"

/**
 * ptint_listint -  A function that prints all the elements of a listint_t list.
 * @h: pointer to the listint
 * Return: A number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
