#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a listint_t list
 * @h: A pointer to the head of the list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
