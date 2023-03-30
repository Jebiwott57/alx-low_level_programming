#include "main.h"

/**
 * *string_toupper - function that changes lowercase string to uppercase.
 * @l: pointer to string
 *
 * Return: uppercase letter changed.
 */
char *string_toupper(char *l)
{
	int ls = 0; /* ls is lenth_of_string */

	while (l[ls] != '\0')
	{
		if (l[ls] >= 97 && l[ls] <= 122)
		{
			l[ls] = l[ls] - 32;
		}
		ls++;
	}
	return (l);
}
