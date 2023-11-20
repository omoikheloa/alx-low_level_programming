#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		
		*head = NULL;
	}
}
