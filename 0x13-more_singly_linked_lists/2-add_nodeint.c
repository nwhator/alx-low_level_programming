#include "lists.h"

/**
 * add_nodeint - Entry point
 * Description: Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to pointer to the head node in the list
 * @n: New nod
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* Allocates memory for the new node created */
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	/* Initialize a new node */
	new->n = n;
	/* Set pointer of new node to current head */
	new->next = *head;
	/* St head to point to the new node */
	*head = new;
	return (new);
}
