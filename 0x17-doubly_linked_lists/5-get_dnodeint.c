#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node1 = head;
	unsigned int count = 0;

	while (node1 && count != index)
	{
		count++;
		node1 = node1->next;
	}
	if (node1 && count == index)
		return (node1);
	return (NULL);
}
