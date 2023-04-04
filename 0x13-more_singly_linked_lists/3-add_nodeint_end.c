#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to the address of a the head
 * @n: integer for the new node to contain
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *last;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	*head = newnode;
	else
	{
	last = *head;
	while (last->next != NULL)
	last->next = newnode;
	return (*head);
	}
	return (newnode);
}
