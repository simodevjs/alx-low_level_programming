#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t and sets the head to NULL
 * @head: double pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
