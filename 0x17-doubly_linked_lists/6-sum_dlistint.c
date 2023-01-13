#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the list.
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node1 = head;
	int add = 0;

	while (node1)
	{
		add += node1->n;
		node1 = node1->next;
	}
	return (add);
}
