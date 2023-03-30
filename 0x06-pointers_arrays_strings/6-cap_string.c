#include "main.h"

/**
 * *cap_string - Function that capitalises all words of a string.
 * @l: pointer to string
 *
 * Return: capitalised words to string.
 */
char *cap_string(char *l)
{
	int sc = 0; /* sc is string_count */

	while (l[sc] != '\0')
	{
		if (l[0] >= 97 && l[0] <= 122)
		{
			l[0] = l[0] - 32;
		}
			if (l[sc] == ' ' || l[sc] == '\t' || l[sc] == '\n' || l[sc] == ','
				|| l[sc] == ';' || l[sc] == '.' || l[sc] == '!' || l[sc] == '?'
				|| l[sc] == '"' || l[sc] == '(' || l[sc] == ')' || l[sc] == '{'
				|| l[sc] == '}')
			{
				if (l[sc + 1] >= 97 && l[sc + 1] <= 122)
				{
				l[sc + 1] = l[sc + 1] - 32;
				}
			}
		sc++;
	}
	return (l);
}
