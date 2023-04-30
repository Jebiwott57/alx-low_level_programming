#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: Pointer to the start of the linked lide 'listint_t'.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = (*head).next;
		free(head);
		head = temp;
	}
}
