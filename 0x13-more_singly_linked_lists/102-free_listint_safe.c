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
		return (counter);
	}
	/* Traverse through the list */
	while (current)
	{
		/* Move current node to placeholder node */
		node = current;
		/* Move to the next node */
		current = current->next;
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
