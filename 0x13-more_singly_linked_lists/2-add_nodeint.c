#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a  list
 * @head: A pointer to a pointer to the list
 * @n: An elements to add to the new node
 * Return: An address to a new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

		if (head != NULL)
		{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
		return (NULL);
node->n = n;
node->next = *head;

*head = node;
return (node);
		}
return (NULL);
}
