#include "lists.h"

/**
 * free_listint2 - Entry point
 * Description: Frees a listint_t list and sets the head to NULL
 * @head: Pointer to pointer of the head node of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *new;

	/* Checks if head is NULL or empty */
	if (!head)
	{
		return;
	}
	/* Sets current to head */
	current  = *head;

	while (current)
	{
		/* Sets new to next node */
		new = current->next;
		free(current);
		/* Moves to new node */
		current = new;
	}
	current = NULL;
}
