#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at
 * the end of a listint_t list.
 * @head: Pointer to the node at the begining of the list.
 * @n: element to add to the end of the linked list.
 *
 * Return: pointer to the newnode of NULL otherwise.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newaddress;
	listint_t *temp = *head;

	newaddress = malloc(sizeof(listint_t));

	if (newaddress == NULL)
		return (NULL);

	(*newaddress).n = n;
	(*newaddress).next = NULL;

	if (*head == NULL)
	{
		*head = newaddress;
		return (newaddress);
	}
	while ((*temp).next)
		temp = (*temp).next;
	(*temp).next = newaddress;

	return (newaddress);
}
