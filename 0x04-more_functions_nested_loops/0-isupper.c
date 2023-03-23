#include "main.h"

/**
 * _isupper - check for uppercase characters
 *
 * @c: character to check if its an uppercase or lowercase
 * Return: 1 if character is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
