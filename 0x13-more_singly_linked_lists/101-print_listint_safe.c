#include "lists.h"

/**
 * print_listint_safe - Entry point
 * Description: Prints a listint_t linked list.
 * @head: Pointer to the first node of the linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t counter = 0;

	/* Traverse the linke list */
	while (head)
	{
		/* Set current to head & move head to the next node */
		current = head;
		head = head->next;
		/* Print current node */
		printf("[%p] %d\n", (void *) current, current->n);
		counter++;
		/* Break loop if next pointer points to previous node */
		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *) current->next, current->next->n);
			break;
		}
	}
	return (counter);
}
