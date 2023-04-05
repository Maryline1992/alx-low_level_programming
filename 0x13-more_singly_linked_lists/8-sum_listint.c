#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all the data (n) of a list
 * @head: pointer to the head of the list
 * Return: 0 if empty or sum of all  data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = (0);
	listint_t *tmp = head;

	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}

	return (sum);
}
