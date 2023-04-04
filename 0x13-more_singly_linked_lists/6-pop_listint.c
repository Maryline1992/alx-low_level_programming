#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
	return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
