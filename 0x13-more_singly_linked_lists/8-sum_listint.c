#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 * data (n) of a listint_t list
 * @head: A pointer
 * Return:0
 */
int sum_listint(listint_t *head)
{
	int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (0);
}
