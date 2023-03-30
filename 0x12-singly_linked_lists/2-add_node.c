#include "lists.h"

/**
 * add_node - Entry point
 * Description: Adds new node at the beginning of the list
 * @head: Pointer to the head of the list_t list
 * @str: String added to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	/* Duplicate the string */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Count the number of characters within square brackets */
	len = 0;
	while (str[len])
		len++;
	/* Set next pointer of new node to current head */
	new->next = *head;
	new->len = len;
	/* Set head to point to the new node */
	*head = new;

	return (new);
}
