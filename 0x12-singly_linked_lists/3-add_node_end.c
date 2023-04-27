#include "lists.h"

/**
 * add_node_end - Function that adds a new node at
 * the end of a 'list_t' list.
 * @head: Double pointer to the node of 'lits_t'.
 * @str: Pointer of new string to add onto 'list_t'.
 *
 * Return: New address to the element or NULL otherwise.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newadr;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newadr = malloc(sizeof(list_t));
	if (!newadr)
		return (NULL);

	(*newadr).str = strdup(str);
	(*newadr).len = len;
	(*newadr).next = NULL;

	if (*newadr == NULL)
	{
		*head = newadr;
		return (newadr);
	}

	while ((*temp).next)
		temp = (*temp).next;
	(*temp).next = newadr;

	return (newadr);
}
