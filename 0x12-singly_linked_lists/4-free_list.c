#include "lists.h"

/**
 * free_list - Entry point
 * Description: Frees a linked list
 * @head: A pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
