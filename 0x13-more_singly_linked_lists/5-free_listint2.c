#include "lists.h"

/**
 * free_listint2 - Entry point
 * Description: Frees a listint_t list and sets the head to NULL
 * @head: Pointer to pointer of the head node of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	/* Checks if head is NULL or empty */
	if (!head)
	{
		return;
	}
	while (*head)
	{
		/* Sets new to next node */
		new = (*head)->next;
		free(*head);
		/* Moves to new node */
		*head = new;
	}
	head = NULL;
}
