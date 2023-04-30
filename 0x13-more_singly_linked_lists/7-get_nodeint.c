#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the
 * nth node of a listint_t linked list.
 * @head: Pointer to the first node of the linked list
 * 'listint_t'.
 * @index: Position of the node to return.
 *
 * Return: Pointer to the node to be returned or NULL otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int element;

	for (element = 0; element < index; element++)
	{
		head = (*head).next;
	}
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
