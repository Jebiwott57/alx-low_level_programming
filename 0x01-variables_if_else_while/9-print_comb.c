#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)

{
	int i, C;

	C = ',';

	for (i = '0'; i <= '9'; i++)
	{
	/* \t is a horizontal tab */
	putchar(i);
	putchar(C);
	putchar('\t');
	}
	putchar('\n');
	return (0);
}
