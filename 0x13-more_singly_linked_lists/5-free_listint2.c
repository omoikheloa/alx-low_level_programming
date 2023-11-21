#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of list
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current = *head;
			*head = (*head)->next;
			free(current);
		}
	}
}
