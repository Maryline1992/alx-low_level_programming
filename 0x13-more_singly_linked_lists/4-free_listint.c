#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: A pointer to the listint list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		head = head->next;
		free (tmp);
		tmp = head;
	}
}
