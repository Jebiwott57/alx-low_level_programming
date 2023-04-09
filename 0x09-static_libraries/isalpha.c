#include "main.h"

/**
 * _isalpha - Check for letter.
 * @c: the integer to charck for letter.
 *
 * Return: letter.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
