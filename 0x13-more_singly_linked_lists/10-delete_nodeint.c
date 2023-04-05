#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the head of the linked list
 * index: index of node to be deleted
 * Return: 1 if successful or -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *count = *head;
	unsigned int node;

	if (count == NULL)
	return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(count);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
	if (count->next == NULL)
	return (-1);	
	count = count->next;
	}
	tmp = count->next;
	count->next = tmp->next;
	free(tmp);

	return (1);
}
