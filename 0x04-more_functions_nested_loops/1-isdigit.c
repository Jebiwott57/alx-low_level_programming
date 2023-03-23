#include "main.h"

/**
 * _isdigit - check for a digit
 *
 * @c: character to be checked if its a digit
 * Return: 1 if character is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
