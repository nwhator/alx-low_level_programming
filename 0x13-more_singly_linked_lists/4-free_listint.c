#include "lists.h"

/**
 * free_listint - Entry point
 * Description: Frees a listint_t list.
 * @head: Pointer to head node in the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		/* Sets a current variable to head node */
		current = head;
		head = head->next;
		/* Frees current node */
		free(current);
	}
}
