#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * Description: Adds a new node at the end of a listint_t list.
 * @head: Pointer to pointer to the head node of the listint_t list
 * @n: New node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	/* Allocates memory for the new node */
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	/* Initialize new node */
	new->n = n;
	new->next = NULL;
	/* If head is null, make new node the head */
	if (!*head)
	{
		*head = new;
	}
	else
	{
		/* Locate last node in the list */
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		/* Attach new node to the end of the list */
		current->next = new;
	}
	return (new);
}
