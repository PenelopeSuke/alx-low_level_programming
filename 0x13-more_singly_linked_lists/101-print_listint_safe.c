#include "lists.h"
#include <stdio.h>

/** 
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: A pointer
 * Return:0
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t name = 0;
	const listint_t *node = head;

	if (!head)
		exit(98);
	while (node)
	{
		printf("[%p] %i\n", (void *)node, node->n);
		node = node->next;
		name++;
	}
	return (name);
}
