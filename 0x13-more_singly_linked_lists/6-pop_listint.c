#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a
 * 'listint_t' linked list.
 * @head: Pointer to the first node of a linked list.
 *
 * Return: n or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int element;

	if (head == NULL || *head == NULL)
		return (0);

	element = (**head).n;
	temp = (**head).next;
	free(*head);
	*head = temp;

	return (element);
}
