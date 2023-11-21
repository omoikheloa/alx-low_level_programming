#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: head of the list
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_c++;
	}
	return (node_c);
}
