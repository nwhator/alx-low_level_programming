#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index in linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if deletion succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1 = *head, *head2;
	unsigned int i;

	if (head1)
		/* Move to the first node if not already */
		while (head1->prev)
			head1 = head1->prev;
	i = 0;
	while (head1)
	{
		if (i == index)
		{
			if (i == 0)
			{
				/* Update head if deleting first node */
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				/* Update previous node's next pointer */
				head2->next = head1->next;
				/* Update next node's previous pointer */
				if (head1->next != NULL)
					head1->next->prev = head2;
			}
			free(head1);
			return (1);
		}
		head2 = head1; /* Moves head2 to the current node */
		head1 = head1->next; /* Moves head1 to the nest node */
		i++;
	}
	/* Index out of range, deletion failed */
	return (-1);
}
