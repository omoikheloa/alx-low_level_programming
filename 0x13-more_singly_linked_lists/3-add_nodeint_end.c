#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: head of a list
 * @n: new node value
 *
 * Return: address of the new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *temp;

	(void)temp;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = n_node;
	}

	return (*head);
}
