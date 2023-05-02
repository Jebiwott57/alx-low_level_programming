#include "lists.h"

size_t print_listint_safe(const listint_t *head);
void listint_length(list_v **head);

/**
 * print_listint_safe - A function that prints a listint_t linked list.
 * @head: A pointer to the first node of a linked list 'listint_t'.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t element = 0;
	list_v *ptr, *string1, *string2;

	ptr = NULL;
	while (head != NULL)
	{
		string1 = malloc(sizeof(list_v));

		if (string1 == NULL)
			exit(98);

		(*string1).s = (void *)head;
		(*string1).next = ptr;
		ptr = (string1);

		string2 = ptr;

		while ((*string2).next != NULL)
		{
			string2 = (*string2).next;
			if (head == (*string2).s)
			{
				printf("-> [%p] %d\n", (void *)head, (*head).n);
				listint_length(&ptr);
				return (element);
			}
		}
		printf("[%p] %d\n", (void *)head, (*head).n);
		head = (*head).next;
		element++;
	}
	listint_length(&ptr);
	return (element);
}

/**
 * listint_length - Find unique codes in the linked 'listint_t' list.
 * @head: The first node of the linked list 'listint_t'.
 *
 * Return: void.
 */
void listint_length(list_v **head)
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
