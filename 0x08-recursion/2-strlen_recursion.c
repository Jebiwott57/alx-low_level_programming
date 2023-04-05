#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	int str_len = 0;

	if(*s)
	{
		str_len++;
		str_len += _strlen_recursion(s + 1);
	}
	return (str_len);
}
