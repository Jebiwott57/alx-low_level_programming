#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function printing all elements
 * of 'listint_t' list.
 * @h: Pointer pointing to 'listint' to print.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t element = 0;

	while (h)
	{
		printf("%u\n", (*h).n);
	h = (*h).next;
	element++;
	}
	return (element);
}
