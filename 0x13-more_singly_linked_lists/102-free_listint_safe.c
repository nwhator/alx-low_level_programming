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
	listint_t *current, *node;
	size_t counter = 0;

	/* Checks if heead node is NULL */
	if (!h)
	{
		return (0);
	}
	/* Traverse through the list */
	current = *h;
	while (current)
	{
		/* Set node pointer to current's next node */
		node = current->next;
		free(current);
		counter++;
		/* If code pinter points to its previos node, break */
		if (node <= current)
		{
			break;
		}
		/* Moves current to thnext node (node) */
		current = node;
	}
	*h = NULL;
	return (counter);
}
