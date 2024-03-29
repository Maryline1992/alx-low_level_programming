#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list node
 * @idx: index of the list where new code is to be added
 * @n: integer for the newnode to contain
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	return (NULL);
tmp->n = n;

if (idx == 0)
{
	tmp->next = copy;
	*head = tmp;
	return (tmp);
}
for (node = 0; node < (idx - 1); node++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);

copy = copy->next;
}

tmp->next = copy->next;
copy->next = tmp;

return (tmp);
}
