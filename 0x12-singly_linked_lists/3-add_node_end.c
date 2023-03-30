#include "lists.h"

/**
 * add_node_end - Entry point
 * Description: Adds new node at the end of a list_t list
 * @head: Pointer to pointer to the head node of the list
 * @str: String stored in the new node
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	/* Duplicate the string */
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	/* Count the number of characters within square brackets */
	new->len = strlen(str);
	new->next = NULL;
	/* If the list is empty, the new node becomes the head */
	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	/* Traverse the list until the last node is reached */
	while (current->next)
	{
		current = current->next;
	}
	/* Add the new node to the end of the list */
	current->next = new;
	return (new);
}
