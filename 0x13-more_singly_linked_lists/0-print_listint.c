#include "lists.h"

/**
 * print_listint - Function that prints all elements
 * of a singly linked list 'listint_t'.
 * @h: Pointer to list to be printed.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		printf("%d\n", (*h).n);
		element++;
		h = (*h).next;
	}
	return (element);
}
