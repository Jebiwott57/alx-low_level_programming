#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 * at index index of a listint_t linked list.
 * @head: Pointer to the first node of the linked list 'listint_t'.
 * @index: Index of the node that sould be deleted.
 *
 * Return: 1 for success or -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *set1 = *head;
	listint_t *set2;

	if (index != 0)
	{
		for (i = 0; i < (index - 1) && set1 != NULL; i++)
		{
			set1 = (*set1).next;
		}
	}

	if (set1 == NULL || ((*set1).next == NULL && index != 0))
		return (-1);

	set2 = (*set1).next;

	if (index != 0)
	{
		(*set1).next = (*set2).next;
		free(set2);
	}
	else
	{
		free(set1);
		*head = set2;
	}
	return (1);
}
