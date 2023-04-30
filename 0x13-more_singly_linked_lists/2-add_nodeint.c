#include "lists.h"

/**
 * add_nodeint - A function that adds a new node
 * at the beginning of a listint_t list.
 * @head: Pointer to the first node on 'listint_t'.
 * @n: Node to insert at the begining of the list.
 *
 * Return: Pointer to the new node or NULL otherwise.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newaddress;

	newaddress = malloc(sizeof(listint_t));

	if (newaddress == NULL)
		return (NULL);

	(*newaddress).n = n;
	(*newaddress).next = *head;
	*head = newaddress;

	return (newaddress);
}
