#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: Pointer to the first node of the linked list 'listint_t'.
 *
 * Return: Address to the node where the loop starts or NULL otherwise.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *front = head;
	listint_t *loop = head;

	if (!head)
		return (NULL);

	while (front && loop && (*loop).next)
	{
		loop = (*((*loop).next)).next;
		front = (*front).next;
		if (loop == front)
		{
			front = head;
			while (front != loop)
			{
				front = (*front).next;
				loop = (*loop).next;
			}
			return (front);
		}
	}

	return (NULL);
}
