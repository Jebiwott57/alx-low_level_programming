#include "lists.h"

/**
 * free_list - Function that frees a 'list_t' singly listed list.
 * @head: A pointer to the string 'list_t' to free.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = (*head).next;
		free((*head).str);
		free(head);
		head = temp;
	}
}
