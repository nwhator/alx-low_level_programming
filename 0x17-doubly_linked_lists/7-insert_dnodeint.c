#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer to the head of the list
 * @idx: Index of the list where the new node should be added (starts at 0).
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h;
	unsigned int i;

	if (!h)
		return (NULL);
	/* Special case: insert at the beginning */
	if (idx == 0)
		new = add_dnodeint(h, n);
	/* Traverse to the node at index (idx - 1) */
	for (i = 0; i < idx - 1 && head; i++)
		head = head->next;
	if (!head)
		return (NULL);
	/* Special case: insert at the end */
	if (head->next == NULL)
		new = add_dnodeint(h, n);
	/* Create a new node and link it to the list */
	new = malloc(sizeof(dlistint_t));
	/* Checks if malloc failed */
	if (!new)
		return (NULL);
	new->n = n;
	new->next = head->next;
	new->prev = head;
	head->next->prev = new;
	head->next = new;

	return (new);
}
