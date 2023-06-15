#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory allocated for each node
 * in a doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while ((temp = head) != NULL)
	{
		/* Move to the next node */
		head = head->next;
		free(temp);
	}
}
