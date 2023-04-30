#include "lists.h"

/**
 * listint_len - Function returning the number of elements
 * in a linked list 'listint_t'.
 * @h: Pointer to the list to be scaned.
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
