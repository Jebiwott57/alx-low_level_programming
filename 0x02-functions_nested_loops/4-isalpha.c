#include "main.h"

/**
 * _isalpha - Check if c it an alphabet character
 *
 * @c: Check if c is an alphabet or otherwise
 * Return: 1 if c is a letter or 0 when otherwise
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		{
		return (1);
		}
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		return (0);
}
