#include "lists.h"

size_t free_listint_safe(listint_t **h);
void listint_length2(list_v **head);

/**
 * free_listint_safe - A function that frees a listint_t linked list.
 * @h: A pointer to the first node of a linked list 'listint_t'.
 *
 * Return: number of nodes in the list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t element = 0;
	list_v *ptr, *string1, *string2;
	listint_t *front;

	ptr = NULL;
	while (*h != NULL)
	{
		string1 = malloc(sizeof(list_v));

		if (string1 == NULL)
			exit(98);

		(*string1).s = (void *)*h;
		(*string1).next = ptr;
		ptr = (string1);

		string2 = ptr;

		while ((*string2).next != NULL)
		{
			string2 = (*string2).next;
			if (*h == (*string2).s)
			{
				*h = NULL;
				listint_length2(&ptr);
				return (element);
			}
		}
		front = *h;
		*h = (*h)->next;
		free(front);
		element++;
	}
	*h = NULL;
	listint_length2(&ptr);
	return (element);
}

/**
 * listint_length - Find unique codes in the linked 'listint_t' list.
 * @head: The first node of the linked list 'listint_t'.
 *
 * Return: void.
 */
void listint_length2(list_v **head)
{
	list_v *temp;
	list_v *front;

	if (head != NULL)
	{
		front = *head;
		while ((temp = front) != NULL)
		{
			front = (*front).next;
			free(temp);
		}
		*head = NULL;
	}
}
