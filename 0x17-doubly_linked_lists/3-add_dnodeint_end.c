#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	temp = *head;
	/* Empty list, new node becomes the head */
	if (!temp)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	/* Insert new node at the end of the list */
	temp->next = new;
	new->prev = temp;
	return (new);
}
