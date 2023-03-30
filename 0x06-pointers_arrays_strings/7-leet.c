#include "main.h"

/**
 * leet - Function thst encodes a string into 1337.
 * @l: pointer to a string.
 * Letter a and A replace by 4
 * Letter e ans E replace by 3
 * Letter o and O replace by 0
 * Letter t and T replace by 7
 * Letter l and L replace by 1
 *
 * Return: encoded string l.
 */
char *leet(char *l)
{
	int sl, lc;	/* ct is string_length and lc is leet_count */
	char leeletters[] = "aAeEoOtTlL";
	char leenum[] = "4433007711";

	for (sl = 0; l[sl] != '\0'; sl++)
	{
		for (lc = 0; lc < 10; lc++)
		{
			if (l[sl] == leeletters[lc])
			{
				l[sl] = leenum[lc];
			}
		}
	}
	return (l);
}
