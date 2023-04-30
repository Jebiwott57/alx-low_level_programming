#include "lists.h"

/**
 * reverse_listint - A function that reverses a
 * 'listint_t' linked list.
 * @head: A double pointer to the first node of the linked list 'listint_t'.
 *
 * Return: A pointer to the new address of list in reverse.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front = NULL;
	listint_t *rev = NULL;

	while (*head != NULL)
	{
		front = (**head).next;
		(**head).next = rev;
		rev = *head;
		*head = front;
	}
	*head = rev;

	return (*head);
}
