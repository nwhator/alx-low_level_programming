#include "lists.h"

/**
 * find_listint_loop - Entry point
 * Description: Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list
 *
 * Return: Address of node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *end = head;

	/* Check if list is NULL, or just an element */
	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	/*
	 * Traverse the list with start and end pointers,
	 * Until start and end pointers meet,
	 * Or reaches end
	 */
	while (end != NULL && end->next != NULL)
	{
		start = start->next;
		end = end->next->next;
		if (start == end)
		{
			/* If equal there's a loop */
			start = head;
			while (start != end)
			{
				/* If not equal, keep check next pointer until they meet */
				start = start->next;
				end = end->next;
			}
			return (start);
		}
	}
	/* Returns NULL if no loop */
	return (NULL);
}
