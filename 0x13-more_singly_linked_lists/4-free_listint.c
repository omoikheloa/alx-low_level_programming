#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: head of the list
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
