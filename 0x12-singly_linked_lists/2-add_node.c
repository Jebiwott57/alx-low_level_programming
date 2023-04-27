#include "lists.h"

/**
 * add_node - Function adding a new node
 * at the begining of 'list_t' list.
 * @head: A double pointer pointing to list_t.
 * @str: Pointer to the new string to add at the beginging of the string.
 *
 * Return: Address to the new element (*head) or NULL otherwise.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newadr;
	unsigned int len = 0;

	while (str[len])
		len++;

	newadr = malloc(sizeof(list_t));

	if (!newadr)
		return (NULL);

	(*newadr).str = strdup(str);
	(*newadr).len = len;
	(*newadr).next = (*head);
	(*head) = newadr;

	return (*head);
}
