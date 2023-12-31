#include "lists.h"

/**
 * add_nodeint - add a new node at start of a linked list
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element, NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
