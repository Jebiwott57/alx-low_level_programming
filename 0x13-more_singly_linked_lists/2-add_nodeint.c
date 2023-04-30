#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at
 * the begining of a list 'listint_t'.
 * @head: A double pointer pointing to 'listint_t'.
 * @n: The new element to add onto the string list 'listint_t'.
 *
 * Return: newaddress or NULL otherwise.
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
