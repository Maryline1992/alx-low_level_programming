#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a linked listint_t list.
 * @h: a pointer to the head of linked list
 * Return: A number elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
	num_node++;
	h = h->next;
	}
	return (num_node);
}
