#include "lists.h"

/**
 * reverse_listint - Entry point
 * Description: Reverses a listint_t linked list.
 * @head: Pointer to pointer of first node in the linked list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *top = NULL;
	listint_t *bottom;

	if (!head || !*head)
	{
		return (NULL);
	}

	while (*head)
	{
		/* Saves next node */
		bottom = (*head)->next;
		/* Reverses pointer direction */
		(*head)->next = top;
		/* Moves the top node to the current node */
		top = *head;
		/* Moves head node to the next node */
		*head = bottom;
	}
	/* Then sets head to the last node(top) */
	*head = top;

	return (*head);
}
