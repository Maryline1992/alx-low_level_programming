#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: a pointer to the list to be free
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	{
	while (*head)
	{
	tmp = (*head);
	*head = (*head)->next;
	free(tmp);
	}
	}
	free(*head);
	head  = NULL;
}

