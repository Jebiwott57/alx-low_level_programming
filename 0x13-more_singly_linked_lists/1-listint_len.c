#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function returning number of
 * elements in a linked 'listint_t' list.
 * @h: Pointer to 'listint_t' list.
 *
 * Return: elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = (*h).next;
	}
	return (elements);
}
