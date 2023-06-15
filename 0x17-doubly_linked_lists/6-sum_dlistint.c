#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of the linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all the data in the list, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Traverse the list and accumulate the sum of data values */
	while (head)
	{
		/* Add the current node's data to the sum */
		sum += head->n;
		/* Move to the next node */
		head = head->next;
	}
	return (sum);
}
