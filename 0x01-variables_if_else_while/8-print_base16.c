#include <stdio.h>

/**
 * main - Entry point Hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i, j;


	for (i = '1'; i <= '9'; i++)
	{
	putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
