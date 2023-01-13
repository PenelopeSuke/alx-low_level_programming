#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node1 = h;
	size_t count = 0;

	while (node1)
	{
		count++;
		node1 = node1->next;
	}
	return (count);
}
