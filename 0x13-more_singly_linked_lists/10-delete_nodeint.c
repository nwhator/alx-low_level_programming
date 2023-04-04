#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * Description: Deletes the node at index index of a listint_t linked list.
 * @head: Pointer to pointer of first node in linked list
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;
	/* Where i is the node */

	/* Checks if head is empty */
	if (!(*head))
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	/* Checks node before it get removed */
	current = *head;
	for (i = 0; i < (index - 1); i++)
	{
		/* Checks if index is out of range */
		if (!current->next)
			return (-1);
		current = current->next;
	}
	/* Delete the node at index */
	temp = current->next;
	current->next = temp->next;
	free(temp);
	/* Success */
	return (1);
}
