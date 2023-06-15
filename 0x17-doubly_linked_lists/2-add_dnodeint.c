#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	/* Allocate memory for the new node */
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		/* Return NULL if memory allocation failed */
		return (NULL);
	}
	/* Set the value and pointers of the new node */
	new->n = n;
	new->prev = NULL;
	h = *head;
	new->next = h;
	/* Update the previous node of the current head */
	if (h)
	{
		h->prev = new;
	}
	/* Update the head to point to the new node */
	*head = new;
	/* Return the address of the new element */
	return (new);
}
