#include "lists.h"

/**
 * free_listint_safe - Entry point
 * Description: Frees a listint_t list.
 * @h: Pointer to pointer of first node in the linked list
 *
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *node;
	size_t counter = 0;

	/* Checks if heead node is NULL */
	if (!h || !*h)
	{
		return (0);
	}
	/* Traverse through the list */
	while (current)
	{
		if (current <= current->next)
		{
			*h = NULL;
			counter++;
			break;
		}
		/* Set node pointer to current's next node */
		node = current->next;
		current->next = NULL;
		free(current);
		current = node;
		counter++;
	}
	*h = NULL;
	return (counter);
}
