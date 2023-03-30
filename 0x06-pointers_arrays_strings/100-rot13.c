#include "main.h"

/**
 * rot13 - encode a string using rot13.
 * @l: pointer to a string.
 *
 * Return: encoded string l.
 */
char *rot13(char *l)
{
	int sl, lc;	/* ct is string_length and lc is leet_count */
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (sl = 0; l[sl] != '\0'; sl++)
	{
		for (lc = 0; lc < 52; lc++)
		{
			if (l[sl] == letters[lc])
			{
				l[sl] = rot13[lc];
				break;
			}
		}
	}
	return (l);
}
