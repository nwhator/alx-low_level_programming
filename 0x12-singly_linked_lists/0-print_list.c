#include "lists.h"

/**
 * print_list - Entry point
 * Description: Prints all the elements of list_t list
 * @h: Pointer to head of the list
 * Return: Number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
