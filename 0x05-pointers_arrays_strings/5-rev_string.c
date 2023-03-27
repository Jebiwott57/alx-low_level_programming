#include "main.h"

/**
 * rev_string - function that reverses string
 * @s: string to reverse
 *
 * Return: Sring in reverse.
 */
void rev_string(char *s)
{
	char rev = s[0];
	int cnt = 0;
	int n;

	while (s[cnt] != '\0')
		cnt++;
	for (n = 0; n < cnt; n++)
	{
		cnt--;
		rev = s[n];
		s[n] = s[cnt];
		s[cnt] = rev;
	}
}
