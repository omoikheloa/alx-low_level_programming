#include <lists.h>

/**
 * pop_listint - deletes the head node of linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *new;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	data = current->n;

	new = current->next;

	free(current);

	*head = new;

	return (data);
}
