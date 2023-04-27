#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function printing all elements of a 'list_t' list.
 * @h: Pointer to 'list_t' to print.
 *
 * Return: Number of nodes (element).
 */
size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		h = h->next;
		element++;
	}

	return (element);
}
