#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: Pointer ti the first node of a linked list 'listint_t'.
 *
 * Return: sum or 0 otherwise.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = (sum + (*head).n);
		head = (*head).next;
	}
	return (sum);
}
