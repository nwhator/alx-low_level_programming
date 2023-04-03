#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * Description: Returns the nth node of a listint_t linked list.
 * @head: Pointer to first node in the linked list
 * @index: index of the node, starting at 0
 *
 * Return: NULL, if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declaring the i variable as the node */
	unsigned int i;

	/* Go through list until index or end of list is reached */
	for (i = 0; i < index; i++)
	{
		/* If head node does not exist */
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
