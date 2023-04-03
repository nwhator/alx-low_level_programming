#include "lists.h"

/**
 * sum_listint - Entry point
 * Description: returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the first node of the linked list
 *
 * Return: 0, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Goes through the linked list and sums up all the data (n) */
	while (head)
	{
		/* Sums up each node starting from head, then next node */
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
