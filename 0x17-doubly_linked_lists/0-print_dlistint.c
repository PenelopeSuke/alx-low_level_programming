#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node1 = h;
	size_t count = 0;

	while (node1)
	{
		printf("%i\n", node1->n);
		count++;
		node1 = node1->next;
	}
	return (count)
}
