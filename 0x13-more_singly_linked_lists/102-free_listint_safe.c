#include "lists.h"

/**
 * free_listint_safe - frees a list safely
 * @h: pointer to the head of the list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	listint_t *slow, *fast;

	if (!h || !*h)
		return (count);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				temp = slow;
				slow = slow->next;
				fast = fast->next;
				free(temp);
				count++;
			}
			free(slow);
			count++;
			*h = NULL;
			return (count);
		}
	}

	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	*h = NULL;
	return (count);
}
