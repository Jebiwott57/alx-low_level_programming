#include "lists.h"
#include <stdio.h>

/**
 * list_len - Function returning number of elements in 'list_t' list.
 * @h: Pointer to 'list_t' to return.
 *
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = (*h).next;
	}
	return (elements);
}
