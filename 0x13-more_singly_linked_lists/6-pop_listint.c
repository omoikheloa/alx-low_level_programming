#include <lists.h>

/**
 * pop_listint - deletes the head node of linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data;
	listint_t *temp = *head;

	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}

