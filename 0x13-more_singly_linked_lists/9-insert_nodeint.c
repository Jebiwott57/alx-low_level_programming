#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts
 * a new node at a given position.
 * @head: Pointer to the first node of linked list 'listint_t'.
 * @idx: The position to insert a new node in the linked list.
 * @n: The element to insert in the linked list 'listint_t'.
 *
 * Return: newaddress of the node at idex idx or NULL otherwise.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newaddress;
	listint_t *temp = *head;

	if (idx != 0)
	{
		for (i = 0; i < (idx - 1) && temp != NULL; i++)
		{
			temp = (*temp).next;
		}
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	newaddress = malloc(sizeof(listint_t));
	if (newaddress == NULL)
		return (NULL);

	(*newaddress).n = n;

	if (idx == 0)
	{
		(*newaddress).next = *head;
		*head = newaddress;
	}
	else
	{
		(*newaddress).next = (*temp).next;
		(*temp).next = newaddress;
	}
	return (newaddress);
}
