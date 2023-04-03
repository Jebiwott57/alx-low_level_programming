#include "main.h"

/**
 * set_string - A function that sets the value of
 * a pointer to a character.
 * @s: A pointer to a pointer.
 * @to: A pointer pointed to.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
